#include "ui.h"
#include <iostream>

/**
 * \brief just a user interface accessoire for the TUI.
 */
void open_user_interface()
{
	std::cout << "______________________________________________________________________\n\n";
	std::cout << "   /###           /                      /                            \n";
	std::cout << "  /  ############/                     #/                             \n";
	std::cout << " /     #########                       ##                             \n";
	std::cout << " #     /  #                            ##                             \n";
	std::cout << "  ##  /  ##                            ##                             \n";
	std::cout << "     /  ###          /###      /###    ##  /##      /##  ###  /###    \n";
	std::cout << "    ##   ##         / ###  /  / #### / ## / ###    / ###  ###/ #### / \n";
	std::cout << "    ##   ##        /   ###/  ##  ###/  ##/   /    /   ###  ##   ###/  \n";
	std::cout << "    ##   ##       ##    ##  ####       ##   /    ##    ### ##         \n";
	std::cout << "    ##   ##       ##    ##    ###      ##  /     ########  ##         \n";
	std::cout << "     ##  ##       ##    ##      ###    ## ##     #######   ##         \n";
	std::cout << "      ## #      / ##    ##        ###  ######    ##        ##         \n";
	std::cout << "       ###     /  ##    /#   /###  ##  ##  ###   ####    / ##         \n";
	std::cout << "        ######/    ####/ ## / #### /   ##   ### / ######/  ###        \n";
	std::cout << "          ###       ###   ##   ###/     ##   ##/   #####    ###       \n";
	std::cout << "______________________________________________________________________\n\n";
}

/**
 * \brief -h or --help opens the user help with information about parameters and the usage of them
 */
void open_user_help()
{
	std::cout << "usage:	./Tasker.exe <parameter>\n\n";
	std::cout << "options:\n";
	std::cout << "	[-d] <index number>	deletes a task\n";
	std::cout << "	[-i] <task input>	inserts a task\n";
	std::cout << "	[-o]			shows the tasks already inserted\n";
}