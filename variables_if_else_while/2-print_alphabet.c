/*
 * File: 2-print_alphabet.c
 * Auth: Arif
 */

#include <stdio.h>

/**
 * main - Prints lowercase alphabet using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
