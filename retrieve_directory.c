#include "simple_shell.h"
/**
 * retrieve_directory - retrieves the directory path of an executable.
 * @base_dir: The directory in which to search for the executable.
 * @instruction: The name of the executable.
 * @sts: A pointer to a struct stat to store file information.
 *
 * Return: The full path of the executable if found, otherwise NULL.
 */
char *retrieve_directory(char *base_dir, char *instruction, struct stat *sts)
{
	char *instruct_string = nexus_path(base_dir, instruction);

	if (instruct_string)
	{
		if (stat(instruct_string, sts) == 0)
		{
			return (instruct_string);
		}
		free(instruct_string);
	}
	return (NULL);
}
