#include "simple_shell.h"
/**
 * _bd_present_prompt - function replosible for displaying prompt
 * to user
 * Description: it uses isatty to check if stdin file descriptor
 * is associated with terminal if it does prompt is printed
 * fflush(stdout) is call to flush the output buffer andensure
 * that the printed data is immediately displayed on screen.
 * Return: void always
*/
void _bd_present_prompt(void)
{
	char *prompt = "$ ";

	if (isatty(STDIN_FILENO))
	{
		_bd_output(prompt);
		fflush(stdout);
	}

}
