#include "simple_shell.h"
/**
 * locate_path_executable - Locates executable in the PATH environment variable
 * @instruction: The executable or cammand to locate
 * Return: pointer to the located executable path, or NULL if not found
 */
char *locate_path_executable(char *instruction)
{
	int k;
	char *base_dir, *instruct_string, *env_var_path;
	struct stat sts;

	for (k = 0; instruction[k]; k++)
	{
		if (instruction[k] == '/')
		{
			if (stat(instruction, &sts) == 0)
			{
				return (_bd_strdup(instruction));
			}
			return (NULL);
		}
	}
	env_var_path = _bd_getenv("PATH");
	if (!env_var_path)
		return (NULL);
	base_dir = strtok(env_var_path, ":");
	while (base_dir)
	{
		instruct_string = retrieve_directory(base_dir, instruction, &sts);
		if (instruct_string)
		{
			free(env_var_path);
			return (instruct_string);
		}
		free(instruct_string), instruct_string = NULL;
		base_dir = strtok(NULL, ":");
	}
	free(instruct_string);
	free(env_var_path);
	return (NULL);
}
