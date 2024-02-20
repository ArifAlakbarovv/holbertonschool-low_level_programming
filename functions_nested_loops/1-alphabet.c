/* main.h */
#ifndef MAIN_H
#define MAIN_H

void print_alphabet(void);
int _putchar(char c);

#endif /* MAIN_H */

/* 1-alphabet.c */
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

