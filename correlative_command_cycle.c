#include "simple_shell.h"
/**
 * correlative_command_cycle - function is responsible for creating
 * a command cycle, where the user can input commands and have them
 * executed repeatedly
 * @argv: this is a pointer to an array of strings (char **)
 * representing the arguments passed to the program
 * Return: Integer representing the execution status of the command
 * cycle
*/
int correlative_command_cycle(char **argv)
{
	char *user_input;
	char **instruction;
	int exec_status = 0;

	while (true)
	{
		_bd_present_prompt();
		user_input = peruse_user_input();
		if (user_input == NULL)
		{
			_bd_strip_newline();
			return (exec_status);
		}

		instruction = lexical_analyzer(user_input);
		if (!instruction)
		{
			while (true)
			{
				break;
			}
		}
		exec_status = inst_sequence_exec(instruction, argv);
	}
}
