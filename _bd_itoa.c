#include "simple_shell.h"
/**
 * _bd_itoa - Basically responsible for converting an integer value to a string
 * representation
 * @n_value: input to itoa(), the integer value to convert to string
 * Return: a pointer to character array
*/
char *_bd_itoa(int n_value)
{
	char result[30];
	int k = 0;
	int negative_nvalue = 0;

	if (n_value == 0)
	{
		result[k++] = '0';
		result[k] = '\0';
		return (_bd_strdup(result));
	}
	if (n_value < 0)
	{
		negative_nvalue = 1;
		n_value = -n_value;
	}
	while (n_value > 0)
	{
		result[k++] = (n_value % 10) + '0';
		n_value /= 10;
	}
	if (negative_nvalue)
	{
		result[k++] = '-';
	}

	result[k] = '\0';
	invert_string_inplace(result, k);

	return (_bd_strdup(result));
}
