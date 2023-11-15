#include "simple_shell.h"
/**
 * invert_string_inplace - Swaps the characters from the start and end
 * of the string
 * @strn: pointer to string to be inverted
 * @longii: character numbers to be inverted
 * Return: void (always)
*/
void invert_string_inplace(char *strn, int longii)
{
	int from_left = 0;
	char temp_char;
	int from_right = longii - 1;

	for (; from_left < from_right; from_left++, from_right--)
	{
		temp_char = strn[from_left];
		strn[from_left] = strn[from_right];
		strn[from_right] = temp_char;
	}
}
