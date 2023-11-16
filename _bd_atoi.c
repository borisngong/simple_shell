#include "simple_shell.h"
/**
 * _bd_atoi - responsible for converting a string to an integer.
 * @strn: input string to be converted
 *
 * Return: converted integer.
 */
int _bd_atoi(char *strn)
{
	int result = 0;
	int sign = 1;
	int k = 0;

	if (strn[k] == '-')
	{
		sign = -1;
		k++;
	}
	while (strn[k] != '\0')
	{
		result = result * 10 + (strn[k] - '0');
		k++;
	}
	return (sign * result);
}
