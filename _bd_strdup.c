#include "simple_shell.h"
/**
 * _bd_strdup - responsible for creating a duplicate string,
 * allocating memomry for duplicate and copying the contents
 * from input string to the duplicate
 * @strn: string to be duplicated
 * Return: returns pointer to newly allocated memory
*/
char *_bd_strdup(const char *strn)
{
	int longii = 0;
	int k = 0;
	char *dupl_strn;
	const char *temp;

	if (strn == NULL)
	return (NULL);
	temp = strn;
	while (*temp != '\0')
	{
		longii++;
		temp++;
	}
	dupl_strn = malloc(sizeof(char) * (longii + 1));
	if (dupl_strn == NULL)
	{
		return (NULL);
	}

	while (k <= longii)
	{
		dupl_strn[k] = strn[k];
		k++;
	}
	return (dupl_strn);
}
