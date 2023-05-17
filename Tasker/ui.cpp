#include <iostream>
#include "ui.h"

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
	std::cout << "usage:\n";
	std::cout << "	[-i] <task input>\n";
	std::cout << "	[-o] task output\n";
}