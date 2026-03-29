#include <iostream>
#include <filesystem>
#include "save.h"
#include "init.h"
#include <fstream>
#include "list.h"

namespace fs = std::filesystem;


void save::save()
{
	std::string snapshots_file{ "Snapshots.txt" };

		std::cout << "Enter your snapshot message: ";
		std::string snapMSG{};
		std::cin >> snapMSG;

		std::string folder1{ ".codeTM" };


		if (!fs::exists(snapshots_file))
		{
			std::fstream file1(snapshots_file, std::ios::out | std::ios::app);
			file1 << snapMSG << '\n';
		}

		else if (fs::exists(snapshots_file))
		{
			std::fstream file1(snapshots_file, std::ios::out | std::ios::app);
			file1 << snapMSG << '\n';
		}


		fs::path snapABS(fs::absolute(snapMSG));
		fs::path folder1ABS(fs::absolute(folder1));

		fs::create_directory(snapABS);

		fs::copy(folder1ABS, snapABS);

		std::fstream file(snapABS / "snap.txt", std::ios::out);
		file << snapMSG;

}

std::string save::getterSave()
{
	std::string snapshots_file_personality2{ "Snapshots.txt" };
	return snapshots_file_personality2;
}