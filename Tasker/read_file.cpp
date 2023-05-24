#include "config.h"
#include "delete_file.h"
#include "read_file.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>


/**
 * \brief The Function reads the task written in the File located at the file_path declared in the config file
 */
void read_tasks()
{
	std::ifstream file(get_file_path());
	std::string text{};
	if (!file)
	{
		std::cerr << "No ToDoList file found.";
		return;
	}

	int counter{1};
	while (getline(file, text))
	{
		std::cout << "[ " << counter << " ] " << text << '\n';
		++counter;
	}
}

/**
 * \brief the function gets all task and returns a vector with them
 * \return vectpr of the task strings
 */
std::vector<std::string> get_tasks()
{
	std::vector<std::string> tasks;
	std::ifstream file(get_file_path());
	if (!file)
	{
		std::cerr << "File doesn't exist";
		exit(1);
	}
	std::string text;
	while (getline(file, text))
	{
		tasks.push_back(text);
	}
	file.close();
	if (delete_file())
		return tasks;

	exit(1);
}