#include "delete_file.h"
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;
fs::path file_path{"./ToDoList.dat"};

bool delete_file()
{	
	if (exists(file_path))
	{
		try
		{
			fs::remove(file_path);
			std::cout << "File deleted successfully\n";
			return true;
		}
		catch (const fs::filesystem_error& err)
		{
			std::cout << "Error deleting file: " << err.what();
			return false;
		}		
	}
	std::cout << "File does not exist!";
	return false;
}