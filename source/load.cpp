#include <iostream>
#include <filesystem>
#include <fstream>
#include "load.h"
#include <string>

//Creating the fs namespace for convenience
namespace fs = std::filesystem;

void load::load()
{
	//Create a variable for taking the name of the snapshot the user wants to load
	std::string snapshots{};
	
	std::cout << "Enter the snapshot you want to load: ";
	getline(std::cin, snapshots);

	fs::path snapshotsABS(fs::absolute(snapshots));

	fs::remove_all(".codeTM");
	fs::path initFolderABS(fs::absolute(".codeTM"));

	//This will copy the contents of the snapshot the user want to load and copy it to .codeTM directory
	if (fs::exists(snapshotsABS))
	{	
		fs::copy(snapshotsABS, initFolderABS, fs::copy_options::recursive);	
	}
}