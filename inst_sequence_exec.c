#include "simple_shell.h"

/**
 * inst_sequence_exec - responsible for executing a sequence of commands or
 * instruction
 * @instruction: a pointer to an array of strings representing the commands
 * @argv: a pointer to an array of strings representing program arguments
 * Return: 0 on success
 */
int inst_sequence_exec(char **instruction, char **argv)
{
	int exec_status, _bd;
	pid_t subordinate_process;
	char **command;

	subordinate_process = fork();
	if (subordinate_process == 0)
	{
		command = malloc(sizeof(char *) * 2);
		if (command == NULL)
		{
			perror("Memory Error");
			exit(0);
		}
		command[0] = instruction[0];
		command[1] = NULL;
		_bd = execve(command[0], command, environ);
		if (_bd == -1)
		{
			perror(argv[0]);
			deallocate_matrix(instruction);
			free(command);
			exit(0);
		}
	}
	else
		exec_status = wait_child(subordinate_process, instruction, argv);
	return (exec_status);
}

