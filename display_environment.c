#include "simple_shell.h"
/**
 * display_environment - reposible for printing the environment variables.
 * @instruction: represends the instruction or command array.
 * @exec_status: the execution status pointer.
 */
void
display_environment(char **instruction, int *exec_status)
{
	int k;

	for (k = 0; environ[k]; k++)
	{
		_bd_output(environ[k]);
		_bd_output("\n");
	}
	deallocate_matrix(instruction);
	*exec_status = 0;
}
