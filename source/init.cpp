#include <iostream>
#include <filesystem>
#include "init.h"

//Creating the fs namespace for convenience
namespace fs = std::filesystem;

void init::init(std::string command, std::string folderName)
{
	//Check if the user entered the correct command or not
	if (command == "codeTM init")
	{

		//Create a variable with the name of the init folder
		std::string initFolder{ ".codeTM" };

		//error handling
		if (!fs::exists(folderName))
		{
			std::cerr << "The project folder dosen't exist.";
		}

		//The actual init logic
		else
		{
			fs::create_directory(".codeTM");
			fs::copy(folderName, initFolder);
		}
		
	}
}