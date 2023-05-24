#ifndef WRITE_FILE
#define WRITE_FILE

#include <vector>
#include <string>

void write_task_to_file(const std::string &task);
bool write_tasks(std::vector<std::string> tasks, int task_id);

#endif
