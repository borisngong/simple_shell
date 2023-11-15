#include "simple_shell.h"

/**
 * wait_child - waits for the completion of a subordinate process
 * @subordinate_process: the process ID of the subordinate process
 * @instruction: a pointer to an array of strings representing the commands
 * @argv: a pointer to an array of strings representing program arguments
 * Return: the exit status of the subordinate process, or -1 on error
 */
int wait_child(pid_t subordinate_process, char **instruction, char **argv)
{
	int exec_status;
	int status;
	pid_t exited_process;

	exited_process = waitpid(subordinate_process, &status, 0);
	if (exited_process == -1)
	{
		perror(argv[0]);
		deallocate_matrix(instruction);
		exit(EXIT_FAILURE);
	}

	if (WIFEXITED(status))
	{
		exec_status = WEXITSTATUS(status);
	}
	else
	{
		exec_status = -1;
	}

	deallocate_matrix(instruction);

	return (exec_status);
}
