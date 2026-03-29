#pragma once
#ifndef __SAVEH__
#define __SAVEH__
#include <iostream>

//Create the save namespace, I know it wont do anything but I learned it so it will help me practice my skills
namespace save {

	//Declaration of the save command function
	void save();
	
	//Declaration of the getter save command function, it will be used to get the snapshots file name
	std::string getterSave();
}
#endif 

