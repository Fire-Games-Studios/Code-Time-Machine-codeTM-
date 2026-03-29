#include <iostream>
#include <filesystem>
#include "init.h"

namespace fs = std::filesystem;

void init::init(std::string command, std::string folderName)
{
	if (command == "codeTM init")
	{

		std::string initFolder{ ".codeTM" };

		if (!fs::exists(folderName))
		{
			std::cerr << "The project folder dosen't exist.";
		}

		else
		{
			fs::create_directory(".codeTM");
			fs::copy(folderName, initFolder);
		}
		
	}
}