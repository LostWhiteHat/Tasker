#include "delete_task.h"
#include "read_file.h"
#include "write_file.h"
#include <iostream>
#include <string>
#include <vector>

const std::string temp_file_path{"./temp_task_save.dat"};

/**
 * \brief the removes an specified task from the to do list
 * \param task_id is the index number from the task
 */
void delete_task(int task_id)
{
	const std::vector tasks{get_tasks()};
	write_tasks(tasks, task_id);
	std::cout << "Task successful deleted";
}