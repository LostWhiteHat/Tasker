#include "config.h"
#include "init.h"
#include <fstream>
#include <iostream>
#include <string>

const std::string config_file_path{"./config.ini"};

/**
 * \brief validate the ini file if it is the first start to declare the save Location for the ToDoTask file
 */
bool validate_config()
{
	const std::fstream file(config_file_path);
	std::string text{};
	if (!file)
	{
		std::cerr << "File does not exist\n";
		std::cout << "Read the Readme.md to find your fault.\n";
		return false;
	}

	read_config_file(config_file_path);
	return true;
	
}