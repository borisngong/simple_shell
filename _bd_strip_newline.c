#include "simple_shell.h"
/**
 * _bd_strip_newline -  This function is responsible for handling the end
 * of a line when the program is run in an interactive terminal
 * Return: Always void
*/
void _bd_strip_newline(void)
{
	if (isatty(STDIN_FILENO))
	{
		_bd_output("\n");
	}
}
