#include "simple_shell.h"
/**
 * quit_shell - responsible for exiting the simple shell with a given return code.
 * @instruction: The instruction array.
 * @argv: The argument vector.
 * @exec_id: The execution ID.
 * @exec_status: The execution status pointer
 */
void
quit_shell (char **instruction, char **argv, int exec_id, int *exec_status)
{
	int return_code;
	char *id;
	char *display_message = ": Illegal number\n";

	return_code = *exec_status;
	if (instruction[1])
	{
		if (validate_positive_integer(instruction[1]))
		{
			return_code = _bd_atoi(instruction[1]);
		}
		else
		{
			id = _bd_itoa(exec_id);
			_bd_output(argv[0]);
			_bd_output(": ");
			_bd_output(id);
			_bd_output(": ");
			_bd_output(instruction[0]);
			_bd_output(display_message);
			free(id);
			deallocate_matrix(instruction);
			return;
			*exec_status = 2;
			}
		}
		deallocate_matrix (instruction);
		exit(return_code);
}
