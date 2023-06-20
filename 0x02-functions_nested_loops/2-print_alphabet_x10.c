#include "main.h"

/**
 * print_alphabet_x10 - Prints x10 the alphabet
 * Return: void
 */

void print_alphabet_x10(void)

{
	char c;
	int i = 10;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
