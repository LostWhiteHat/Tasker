#include "config.h"
#include "write_file.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

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
		return;
	}

	std::cout << "Writing task to file...\n";
	file << task << "\n";
	file.close();
	std::cout << "Done!\n";
}

bool write_tasks(std::vector<std::string> tasks, const int task_id)
{
	std::fstream file(get_file_path(), std::ios::out | std::ios::app);
	if (!file)
	{
		std::cerr << "File does not exist\n";
		return false;
	}

	for (int i = 0; i < tasks.size(); i++)
	{
		if (i != task_id-1)
			file << tasks[i] << "\n";	
	}
	file.close();
	return true;
}