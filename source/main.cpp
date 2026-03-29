#include <iostream>
#include "init.h"
#include "save.h"
#include <string>
#include "list.h"
#include "load.h"

int main()
{
	std::string cmd_msg{};


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