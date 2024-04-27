#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s != '\0') {
  		length++;
  		s++;
}


	return (length);
}


