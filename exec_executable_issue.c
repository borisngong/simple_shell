#include "simple_shell.h"
/**
 *  exec_executable_issue - handles any associated issue, prints error message
 * indicating an executable issue along with program, index and command
 * @program_name: representing a pointer to a string of programm's name
 * or process where error occurred
 * @instruction: representing a pointer to a string of the specific command or
 * action associated with the error
 * @exec_id: representing  the identifier or index of the executable
 * Return: void (Always)
*/
void exec_executable_issue(char *program_name, char *instruction, int exec_id)
{
	char *id;
	char *display_message = ": Not Found\n";

	id = _bd_itoa(exec_id);
	_bd_output(program_name);
	_bd_output(": ");
	_bd_output(id);
	_bd_output(": ");
	_bd_output(instruction);
	_bd_output(display_message);
	free(id);
}
