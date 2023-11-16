#include "simple_shell.h"
/**
 * validate_builtin_command - responsible for validating if a given instruction
 * is a built-in command or internal command
 * @instruction: represents the command to validate
 *
 * Return: 1 if the commaand is a internal command, 0 otherwise.
 */
int
validate_builtin_command(char *instruction)
{
	int k;
	char *internal_commands[] = { "exit", "cd", "env", "setenv", NULL };

	for (k = 0; internal_commands[k]; k++)
	{
		if (_bd_strcmp(instruction, internal_commands[k]) == 0)
		{
			return (1);
		}
	}
	return (0);
}
