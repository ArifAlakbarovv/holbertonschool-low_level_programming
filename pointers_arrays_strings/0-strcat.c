#include "main.h"
#include <string.h>

/**
 * my code
 *//
char *strcat(char *dest, const char *src)
{
    int index = 0, dest_len = 0;

    while (dest[index++])
        dest_len++;

    for (index = 0; src[index]; index++)
        dest[dest_len++] = src[index];

    dest[dest_len] = '\0';  // Ensure the destination string is null-terminated

    return dest;
}

