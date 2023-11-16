#include "simple_shell.h"

/**
 * switch_dir - Changes the current working directory
 * @instruction: The instruction containing the directory path
 * @exec_id: The execution ID
 * @argv: argument vector
 * Return: void always
 */
void switch_dir(char **instruction, char **argv, int exec_id)
{
	char *id;
	char *display_message = ": can't cd to ";
	const char *home_dir;
	int change_result = -1;

	id = _bd_itoa(exec_id);
	if (instruction[1] == NULL)
	{
		home_dir = _bd_getenv("HOME");
		if (home_dir != NULL)
			change_result = chdir(home_dir);
	}
	else
	{
		change_result = chdir(instruction[1]);
	}
	if (change_result != 0)
	{
		_bd_output(argv[0]);
		_bd_output(": ");
		_bd_output(id);
		_bd_output(": ");
		_bd_output(instruction[0]);
		_bd_output(display_message);
		_bd_output(instruction[1]);
		_bd_output("\n");
	}
	free(id);
	deallocate_matrix(instruction);
}
