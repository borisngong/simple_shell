#include "simple_shell.h"
/**
 * _bd_strlen - responsible for calculating the
 * length of a string
 * @strn: input string where length is to be calculated
 * Return: number of bytes
*/
size_t _bd_strlen(const char *strn)
{
	size_t longii = 0;

	while (strn[longii] != '\0')
	{
		longii++;
	}
	return (longii);
}
