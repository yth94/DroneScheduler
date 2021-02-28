import unreal_engine as ue
from time import sleep
import json
from pathlib import Path

## @package TowerScript
# This is the script the tower runs to figure out what the next tower state is and updates the in-game tower
# with the information taken from the json file

## dict_compare
# @param d1 First dictionary based on the json file
# @param d2 Second dictionary from the current state of the tower
# This is taken from the original Control Parser file and just compares and finds the state in the json file
# and returns the states with the same values
def dict_compare(d1, d2):
	d1_keys = set(d1.keys())
	d2_keys = set(d2.keys())
	intersect_keys = d1_keys.intersection(d2_keys)
	added = d1_keys - d2_keys
	removed = d2_keys - d1_keys
	modified = {o : (d1[o], d2[o]) for o in intersect_keys if d1[o] != d2[o]}
	same = set(o for o in intersect_keys if d1[o] == d2[o])
	return added, removed, modified, same


## ControlTower
# ControlTower class to run the update functions and begin_play functions
class ControlTower:

    ## begin_play
    # @param self The object pointer
    # This runs when the sim launches and loads the json file
	def begin_play(self):
		FilePath = Path(__file__).resolve().parents[0] # Get parent file
		FileName = "request_handler_example_readable2.json" # File name
		FullFile = Path(FilePath, FileName) # Creates the file path
		File = open(FullFile) # Opens the file
		global FileDict # Makes it global so the update function can use it
		FileDict = json.load(File) # loads it as a json to get the dictionary

    ## Update
    # @param self The object pointer
    # This function is called at every time step by every control tower.
    # It finds the next tower state based on the previous state through the json file.
    # Then it updates the tower with the new information including the aircraft approved
    # for passing/launching
	def Update(self):

        # self.uobject is the UnrealEnginePython's way of referencing unreal objects
		tower = self.uobject.getowner() # Gets the UE4 tower object
		towerName = tower.get_name() # Gets the tower name
		TimeState = tower.get_property('TimeState') # Gets the TimeState variable data
		CurrentState = tower.get_property('State') # Gets the current state map variable data
		Successors = tower.get_property('Successors') # Gets the successors list if available
		if not Successors: # If there is no list of successors, it takes the full json dictionary data
			automaton = FileDict 
		else:	
			SuccessorValues = [FileDict[str(x)] for x in Successors] # This grabs all the values in the json file that's in the Successor (key) list
			automaton = dict(zip(Successors, SuccessorValues)) # Combines the keys with the values

		states = []
        # Although it shows as a for loop, this just gets the first value found in the automaton dict that matches with the current tower state
		for s in automaton:
			added, removed, modified, same = dict_compare(automaton[s]['State'], CurrentState)
			if len(modified) == 0:
				states.append(s) # adds the value found to the states list (although it'll be a list of 1 right now)
				break

		if not states: # if no successors are found, then nothing happens 
			print("Can't find next successor, current successor:")
		else:
			StateVal = []
			if not Successors:
				StateVal = str(states[0]) # I'm not sure why this is needed but I'm just leaving it as is...
			else:	
				StateVal = states[0]

			Successors = automaton[states[0]]['Successors'] # Gets the next list of successors

			available = ["a" + str(x) for x in range(tower.get_property('MaxAvailable'))] # Creates the list for a0, a1, a2... etc.
			LandingAircraft = [automaton[states[0]]['State'][str(x)] for x in available] # Sets the list of landing aircraft
			tower.set_property('Successors', Successors) # Updates the successor list in UE4
			tower.set_property('LandingAircraft', LandingAircraft) # Updates the landing aircraft in UE4
			tower.call('ApproveAircraft') # Calls the ApproveAircraft function in UE4
