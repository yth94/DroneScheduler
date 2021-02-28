import unreal_engine as ue
from unreal_engine.structs import MB_VTOL_Struct
from time import sleep
import json
from pathlib import Path
from datetime import datetime
from ast import literal_eval
from collections import OrderedDict

## @package LogScript
# This logs the state data from the towers and aircrafts. This script is used by the MapBase in UE4


## LogScript
# The class utilized by the MapBase`
class LogScript:

    ## begin_play
    # @param self The object pointer
    # This runs when the sim is launched and creates the log file based on the current date/time
	def begin_play(self):
		FilePath = Path(__file__).parents[2] # Gets the parent folder 2 levels up
		TimeNow = datetime.now().strftime("%d.%m.%Y-%H.%M.%S") # Gets the current date/time`
		FileName = "LogFiles/Log" + TimeNow + ".json" # Creates the file name
		global FullFile # Turns the filename as a global variable so the other functions can use it
		FullFile = Path(FilePath, FileName) # Turns the file into a full filepath

    # MapBaseUpdate
    # @param self The object pointer
    # This function is run every state update, and takes in all the data, converts it into better format if needed,
    # then logs it into the log file
	def MapBaseUpdate(self):
		base = self.uobject.getowner() # Gets the UE4 map base (the owner) object reference
		aircraft_data = {k: v.as_dict() for k, v in base.get_property('AircraftStates').items()} # Gets the aircraft states dict and turns it into a key dictionary-value pair
		tower_data = {k: v.as_dict() for k, v in base.get_property('TowerStates').items()} # Gets the tower states dict and turns it into a key dictionary-value pair


        # UE4 turns the variable names from for example, 'Requests' to 'Request############'. This just removes those random values
		tower_labels = ['Requests', 'Available', 'NumInAirspace', 'RequestQueue', 'Accepted', 'Weather'] # The state labels. Add to this list if new states are added for the tower
		aircraft_labels = ['Status', 'WaitingTime', 'Weather'] # The state labels. Add to this list if new states are added for the aircraft

		if bool(tower_data): # Checks if tower data is not empty
			names = next(iter(tower_data.values())) # Gets the names/labels that UE4 puts
			for label in tower_labels: # Goes through all the tower labels
				name = [i for i in names if label.lower() in i.lower()][0] # Finds the name UE4 put the label as
				for k, v in tower_data.items() : tower_data[k][label] = tower_data[k].pop(name) # Converts the name back to its original label

		if bool(aircraft_data): # Checks if aircraft data is not empty
			names = next(iter(aircraft_data.values())) # Gets the names/labels that UE4 puts
			for label in aircraft_labels: # Goes through all the aircraft labels
				name = [i for i in names if label.lower() in i.lower()][0] # Finds the name UE4 put the label as
				for k, v in aircraft_data.items() : aircraft_data[k][label] = aircraft_data[k].pop(name) # Converts the name back to its original label

        # Sometimes the file isn't already created, so this just creates it
		if not Path(FullFile).exists():
			StateZero = {
				"0" : {
					"TowerStates" : {},
					"AircraftStates" : {}
				}
			}
			with open(FullFile, 'w') as LogFile:
				json.dump(StateZero, LogFile)

		state = base.get_property('TimeState') # Gets the current time state

		with open(FullFile) as LogFile:
			data = json.load(LogFile) #Opens and loads the current log file. As the log file gets bigger, this process takes longer so a better solution might be required....
            # The problem is, if you just json.dump without loading the file, it just adds it as {state1}{state2} instead of {state1, state2}

        #adds the new state data to the logdata
		data[state] = {
			"TowerStates" : tower_data,
			"AircraftStates" : aircraft_data
		}

        # Rewrites the log file with the new information. Again, as the file gets bigger this process takes longer
		with open(FullFile, 'w') as LogFile:
			json.dump(data, LogFile)
		
