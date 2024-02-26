#include "main.h"
#include <ctype.h>
/*
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}



