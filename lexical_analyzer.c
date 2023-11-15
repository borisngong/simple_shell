
#include "simple_shell.h"
/**
 * lexical_analyzer - responsible for tokenizing the user input
 * string into individual instructions or commands
 * @user_input: this a pointer to a string (char *) representing
 * the user input string to be analyzed
 * Return: a pointer to a pointer representing an array of strings
 * (instructions), or NULL on error
*/
char **lexical_analyzer(char *user_input)
{
	char **instructions = NULL;
	int sub_string_count = 0;

	if (!user_input)
		return (NULL);

	sub_string_count = compute_substrings(user_input);

	instructions = split_user_input(user_input, sub_string_count);
	free(user_input);

	return (instructions);
}
