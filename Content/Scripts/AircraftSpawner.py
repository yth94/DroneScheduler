import unreal_engine as ue
import numpy

##@package AircraftSpawner
# This script picks a random origin and destination tower based off the probability distribution of the
# control towers. 

## Controller
# Class to figure out the aircraft origin/dest
class Controller:

	## AircraftSpawn
	# @param self The object pointer
	# @param NumOfAircraft The number of aircraft to spawn and figure out their origin+destination
	# This function figures out the all the origin destination pairs for each aircraft that will be spawned
	def AircraftSpawn(self, NumOfAircraft):
		MapBase = self.uobject.get_owner() # Reference to the MapBase in UE4
		Towers = MapBase.get_property('AllTowers') # ControlTowerBP2 object list from UE4
		
		TakeoffVals = MapBase.get_property('TakeoffProb') # The probability values of takeoff for each tower
		LandVals = MapBase.get_property('LandProb') # The probability value of the destination for each tower

		TakeoffProb = numpy.array(TakeoffVals, dtype='f')/sum(TakeoffVals) # Divides by the sum of all probability to get a total probability of 1

		# Gets a list of random towers to takeoff from, based on their probability values
		TakeoffTowers = numpy.random.choice(Towers, int(NumOfAircraft), replace=True, p=TakeoffProb).tolist() 
		LandTowers = []
		# Goes through each origin tower and finds the destination tower, without including the origin tower
		for i in TakeoffTowers:
			DestIndex = Towers.index(i) # Index to remove

			DestTowers = list(Towers) # Copies the Towers list
			del DestTowers[DestIndex] # Removes the origin tower from the list

			DestVals = list(LandVals) # Copies the probability values
			del DestVals[DestIndex] # Removes the origin tower value
			DestProb = numpy.array(DestVals)/sum(DestVals) # Divides by the sum to get a total probability of 1

			LandTowers.append(numpy.random.choice(DestTowers, replace=True, p=DestProb)) # Finds a random dest tower based on the probability
		

		# Sets the origin + dest towers in UE4
		MapBase.set_property('TakeoffTowers', TakeoffTowers)
		MapBase.set_property('LandTowers', LandTowers)