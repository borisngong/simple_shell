#include "simple_shell.h"
/**
 * *_bd_strcat - reponsible for concactenating two strings
 * @destin: destination string
 * @srce: source string
 * Description: function appends content of the source string
 * to the end of the destination string
 * Return: a pointer to destination string
*/
char *_bd_strcat(char *destin, const char *srce)
{
	char *destin_counter;

	destin_counter = destin;
	while (*destin_counter != '\0')
	{
		destin_counter++;
	}
	while (*srce != '\0')
	{
		*destin_counter = *srce;
		destin_counter++;
		srce++;
	}
	*destin_counter = '\0';
	return (destin);
}
