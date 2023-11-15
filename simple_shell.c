#include "simple_shell.h"
/**
 * main - entry point of the simple_shell program serving as
 * the starting point of the simple shell program
 * @argc: argument count, number of command-line arguments
 * passed to the program when it is executed, here (void) argc
 * indicate variable is unused and prevent compiler warnings
 * @argv: argument vector, represents the array of
 * command-line arguments.
 * Return: 0 (Always) on successful termination of program
 */
int main(int argc __attribute__((unused)), char **argv)
{
	correlative_command_cycle(argv);
	return (0);
}
