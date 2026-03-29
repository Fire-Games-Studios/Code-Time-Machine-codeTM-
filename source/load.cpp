#include <iostream>
#include <filesystem>
#include <fstream>
#include "load.h"
#include <string>

namespace fs = std::filesystem;

void load::load()
{
	std::string snapshots{};
	
	std::cout << "Enter the snapshot you want to load: ";
	getline(std::cin, snapshots);

	fs::path snapshotsABS(fs::absolute(snapshots));

	fs::remove_all(".codeTM");
	fs::path initFolderABS(fs::absolute(".codeTM"));

	if (fs::exists(snapshotsABS))
	{	
		fs::copy(snapshotsABS, initFolderABS, fs::copy_options::recursive);	
	}
}