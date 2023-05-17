#include <iostream>
#include <fstream>
#include <string>
#include "write_file.h"
#include "config.h"

/**
 * \brief The function write a line for every task input into a file
 * \param task is the string input from the user to write into the task file
 */
void write_task_to_file(const std::string &task)
{
	std::fstream file(get_file_path(), std::ios::out | std::ios::app);
	if (!file)
	{
		std::cerr << "File does not exist\n";
	}
	else
	{
		std::cout << "Writing task to file...\n";
		file << task << "\n";
		file.close();
		std::cout << "Done!\n";
	}	
}