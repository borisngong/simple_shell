#include "simple_shell.h"
/**
 * _bd_strcpy - responsible for copying contents of source
 * string to the destination string
 * @destin: represents the destination string where
 * the copied string will be stored
 * @srce: represents the destination string from which
 * the charcaters will be copied string
 * Return: a pointer to the destination string
*/
char *_bd_strcpy(char *destin, char *srce)
{
	char *untouched_destin;

	untouched_destin = destin;
	while ((*destin++ = *srce++))
	{
		/** copy current from source to destination */
	}
	*destin = '\0';
	return (untouched_destin);
}
