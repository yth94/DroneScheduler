import unreal_engine as ue
from pathlib import Path
from datetime import datetime

## @package ParamReader
# This reads the parameter data from the parameters.txt file and sends it to UE4

## ParamReader
# The class to read the param data
class ParamReader:

    ## begin_play
    # @param self The object pointer
    # This runs when the sim is launched and gets the parameter data and sends it to UE4 objects
	def get_params(self):
		FilePath = Path(__file__).parents[2] # Gets the parent folder 2 levels up, where the parameter text file is located
		FileName = "parameters.txt" # name of the text file
		FullFile = Path(FilePath, FileName) # Creates the full file path
		with open(FullFile, 'r') as File:
			data = list(File) # Opens and converts the text data to a list

		data_dict = {}
		for key_value in data: # turns the data into a dictionary
			key, value = key_value.split(': ', 1)
			data_dict[key] = value.replace('\n', '')

		LevelDefault = self.uobject.getowner() # Gets the object that's using this script
		#MapBase.set_property('LaunchChance', float(data_dict.get('LaunchChance'))) # Sets the LaunchChance variable to the respective value
		#LevelDefault.set_property('Parameters', data_dict)
		print(data_dict)
		print("Hello")

	def test(self):
		print("Test")