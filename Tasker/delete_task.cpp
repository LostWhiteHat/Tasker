#include "delete_task.h"
#include "read_file.h"
#include "write_file.h"
#include <iostream>
#include <string>

const std::string temp_file_path{"./temp_task_save.dat"};

/**
 * \brief the removes an specified task from the to do list
 * \param task_id is the index number from the task
 */
void delete_task(int task_id)
{
	if (write_tasks(get_tasks(), task_id))
	{
		std::cout << "Task successful deleted";
		return;
	}
	std::cerr << "An error occurred";
}