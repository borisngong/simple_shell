#include "simple_shell.h"
/**
 * validate_positive_integer - reponsible for validating if a string
 * represents a positive integer
 * @strn: input string to validate
 *
 * Return: 1 if a positive integer, 0 otherwise
 */
int validate_positive_integer(char *strn)
{
	int k = 0;

	if (strn == NULL)
	{
		return (0);
	}
	while (strn[k])
	{
		if (strn[k] < '0' || strn[k] > '9')
		{
			return (0);
		}
		k++;
	}
	return (1);
}
