#include <iostream>
#include "write_file.h"
#include "read_file.h"
#include "ui.h"
#include "parameter_handler.h"


/**
 * \brief the parameters that has been given in the CLI or TUI getting validated to operate the declared function of them
 * \param argc the id of the parameter. Given as const int
 * \param argv the parameter char. Given as char**
 */
void parameter_handler(const int argc, char** argv)
{
	if (argc == 1)
	{
		open_user_help();
		exit(1);
	}

	const std::string arg_parameter{argv[1]};
	if(arg_parameter == "-i")
	{
		const std::string arg_task{argv[2]};
		write_task_to_file(arg_task);
	}
	else if (arg_parameter == "-o")
	{
		read_tasks();
	}
	else if (arg_parameter == "-h" || arg_parameter == "--help")
	{
		open_user_help();
	}
	else
	{
		std::cerr << "Invalid argument";
	}
}