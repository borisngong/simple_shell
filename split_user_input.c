#include "simple_shell.h"
/**
 * split_user_input -  reponsible in taking a user input string,splits it
 * into substrings based on a delimiter(sub_string_seperator), and stores the
 * substringsin dynamically allocated memory
 * @user_input: is a pointer to a string containing the user input that
 * needs to be split into substrings
 * @sub_string_count: specifies the number of substrings (instructions)
 * expected to be present in the user_input string.
 * Return: a pointer to a pointer (char **) representing an array of
 * strings (instructions), NULL on error
*/
char **split_user_input(char *user_input, int sub_string_count)
{
	char **instructions = NULL, *sub_string = NULL;
	int k = 0;

	instructions = malloc(sizeof(char *) * (sub_string_count + 1));
	if (!instructions)
		return (NULL);

	sub_string = strtok(user_input, sub_string_seperator);
	while (sub_string)
	{
		instructions[k] = _bd_strdup(sub_string);
		sub_string = strtok(NULL, sub_string_seperator);
		k++;
	}
	instructions[k] = NULL;

	return (instructions);
}
