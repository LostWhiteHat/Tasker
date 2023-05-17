#include <iostream>
#include <fstream>
#include "config.h"

std::string file_path{};

std::string get_file_path()
{
	return file_path;
}

void read_config_file(std::string config_file_path)
{
	std::fstream file(config_file_path);
	if (!file)
	{
		std::cerr << "An error has occurred\n";		
	}
	else
	{
		while (std::getline(file, file_path))
		{
			std::cout << "Config file loaded!\n";
		}
	}
}