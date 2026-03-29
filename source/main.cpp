#include <iostream>
#include "init.h"
#include "save.h"
#include <string>
#include "list.h"
#include "load.h"

int main()
{
	//Create the variable that will be used to enter commands
	std::string cmd_msg{};


	//A while loop that is the core of the program, based on the commands the user enters, their respective functions will be called
	while (cmd_msg != "exit")
	{
		std::getline(std::cin, cmd_msg);
		std::string flle{ save::getterSave()};
		std::string projectName{};

		if (cmd_msg == "codeTM init")
		{
			std::cout << "Enter your project's name: ";
			std::getline(std::cin, projectName);
			init::init(cmd_msg, projectName);
			
		}

		if (cmd_msg == "codeTM save")
		{
		  save::save();
		}

		if (cmd_msg == "codeTM list")
		{
			list::list(flle);
		}

		if (cmd_msg == "codeTM load")
		{
			load::load();
		}
		
	}
	
	return 0;
	
}