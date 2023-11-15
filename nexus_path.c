#include "simple_shell.h"
/**
 * nexus_path - concatenates a base directory and an instruction to form a path
 * @base_dir: represents the base directory
 * @instruction: represents instruction or command to be executed
 * Return: A pointer to the concatenated path, or NULL if an error occurs
 */
char *nexus_path(char *base_dir, char *instruction)
{
	size_t base_dir_longii;
	size_t instr_longii;
	char *result;

	instr_longii = _bd_strlen(instruction);
	base_dir_longii = _bd_strlen(base_dir);
	result = malloc(base_dir_longii + instr_longii + 2);

	if (result)
	{
		_bd_strcpy(result, base_dir);
		_bd_strcat(result, "/");
		_bd_strcat(result, instruction);
	}

	return (result);
}
