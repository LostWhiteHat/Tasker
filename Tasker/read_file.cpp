#include <iostream>
#include <fstream>
#include <string>
#include "read_file.h"
#include "config.h"


/**
 * \brief The Function reads the task written in the File located at the file_path
 */
void read_tasks()
{
	std::ifstream file(get_file_path());
	std::string text{};
	if (!file)
	{
		std::cerr << "No ToDoList file found.";
	}
	else
	{
		int counter{1};
		while (getline(file, text))
		{
			std::cout << "[ " << counter << " ] " << text << '\n';
			++counter;
		}
	}	
}