#include "simple_shell.h"

/**
 * inst_sequence_exec - responsible for executing a sequence of commands or
 * instruction
 * @instruction: a pointer to an array of strings representing the commands
 * @argv: a pointer to an array of strings representing program arguments
 * Return: 0 on success
 */
int
inst_sequence_exec(char **instruction, char **argv)
{
	int exec_status;
	pid_t subordinate_process;
	int _bd;

	subordinate_process = fork();
	if (subordinate_process == -1)
	{
		perror(argv[0]);
		exit(0);
	}
	if (subordinate_process == 0)
	{
		_bd = execve(instruction[0], instruction, environ);
		if (_bd == -1)
		{
			perror(argv[0]);
			deallocate_matrix(instruction);
			exit(0);
		}
	}
	else
	{
		wait_child(subordinate_process, &exec_status, instruction);
	}
	return (WEXITSTATUS(exec_status));
}
