#include "simple_shell.h"
/**
 * wait_child - Wait for the subordinate or child process to complete
 * and deallocate the instruction array
 * @subordinate_process: PID of the subordinate process
 * @exec_status: Pointer to store the exit status of the subordinate process
 * @instruction: Pointer to the instruction array
 */
void wait_child(pid_t subordinate_process, int *exec_status,
char **instruction)
{
	waitpid(subordinate_process, exec_status, 0);
	deallocate_matrix(instruction);
}
