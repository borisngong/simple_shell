#include "simple_shell.h"
/**
 * inst_sequence_exec - responsible for executing a sequence of commands
 * @instruction: a pointer to an array of strings representing the commands
 * @argv: a pointer to an array of strings representing program arguments
 * @exec_id: execution ID
 * Return: 0 on success
 */
int inst_sequence_exec(char **instruction, char **argv, int exec_id)
{
	int exec_status, _bd;
	pid_t subordinate_process;
	char *instruct_string;

	instruct_string = locate_path_executable(instruction[0]);
	if (!instruct_string)
	{
		exec_executable_issue(argv[0], instruction[0], exec_id);
		deallocate_matrix(instruction);
		return (0);
	}
	subordinate_process = fork();
	if (subordinate_process == 0)
	{
		_bd = execve(instruct_string, instruction, environ);
		if (_bd == -1)
		{
			free(instruct_string), instruct_string = NULL;
			deallocate_matrix(instruction);
			exit(0);
		}
	}
	else
	{
		waitpid(subordinate_process, &exec_status, 0);
		deallocate_matrix(instruction);
		free(instruct_string), instruct_string = NULL;
	}
	return (exec_status);
}
