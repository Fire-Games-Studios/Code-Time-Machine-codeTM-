#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "list.h"
#include "save.h"

//Creating the fs namespace for convenience
namespace fs = std::filesystem;

void list::list(std::string snapshotsFile)
{

	//Creating variables to read the snapshots file
	std::string file{ snapshotsFile };
	std::string line;


	//If file exists read it
	if (fs::exists(file))
	{
		std::fstream fle(file, std::ios::in);


		if (fle.is_open())
		{
			while (std::getline(fle, line))
			{
				std::cout << line << '\n';
			}
		}


		//error handling
		else
		{
			std::cout << "File isint open";
		}
	}
}

		
	



