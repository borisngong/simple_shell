#include "simple_shell.h"
/**
 * peruse_user_input - reads user input from stdin
 *
 * Return: pointer to a character array representing
 * user input
*/
char *peruse_user_input(void)
{
	char *user_input = NULL;
	size_t longii = 0;
	ssize_t user_input_content;

	user_input_content = getline(&user_input, &longii, stdin);
	if (user_input_content == -1)
	{
		free(user_input);
		return (NULL);
	}
	return (user_input);
}
