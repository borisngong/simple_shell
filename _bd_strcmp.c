#include "simple_shell.h"
/**
 * _bd_strcmp - compares two strings that are null terminated
 * @strn1: represents the first strings to be compared to be compared
 * @strn2: represent second string to be comapred
 * Return: 0 if strings are equal, negative if first string < second string
 * and postive if first string > second string
*/
int _bd_strcmp(const char *strn1, const char *strn2)
{
	while (*strn1 && (*strn1 == *strn2))
	{
		strn1++;
		strn2++;
	}
	return (*strn1 - *strn2);
}
