#include "simple_shell.h"
/**
 * execute_builtin_command - reponsible for executing the built-in commands
 * @instruction: represents instruction or command to execute
 * @argv: represents arguments passed along with the command
 * @exec_id: The execution id
 * @exec_status: The execution status
 * Return: void always
 */
void execute_builtin_command(char **instruction, char **argv, int exec_id,
int *exec_status)
{
	if (_bd_strcmp(instruction[0], "exit") == 0)
	{
		quit_shell(instruction, argv, exec_id, exec_status);
	}
	else if (_bd_strcmp(instruction[0], "env") == 0)
	{
		display_environment(instruction, exec_status);
	}
	else if ((_bd_strcmp(instruction[0], "cd") == 0))
	{
		switch_dir(instruction, argv, exec_id);
	}

}