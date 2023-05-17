#include <cstdlib>
#include "ui.h"
#include "init.h"
#include "parameter_handler.h"

int main(const int argc, char** argv)
{
	system("cls");	
	open_user_interface();
	if (validate_config())
	{
		parameter_handler(argc, argv);
	}	
    return 0;
}

