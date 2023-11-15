#include "simple_shell.h"
/**
 * compute_substrings - reponsible for counting the number of substrings
 * in the user input string based on the given sub_string_seperator
 * @user_input: this a  pointer to the input string that needs to be
 * analyzed lexically
 * Return: number of substrings found
*/
int compute_substrings(char *user_input)
{
	int sub_string_count = 0;
	char *sub_string = NULL;
	char *user_input_cpy = NULL;

	user_input_cpy = _bd_strdup(user_input);
	sub_string = strtok(user_input_cpy, sub_string_seperator);
	while (sub_string)
	{
		sub_string_count++;
		sub_string = strtok(NULL, sub_string_seperator);
	}
	free(user_input_cpy);

	return (sub_string_count);
}
