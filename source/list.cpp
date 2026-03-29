#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "list.h"
#include "save.h"

namespace fs = std::filesystem;

void list::list(std::string snapshotsFile)
{
	std::string file{ snapshotsFile };
	std::string line;



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

		else
		{
			std::cout << "File isint open";
		}
	}
}

		
	



