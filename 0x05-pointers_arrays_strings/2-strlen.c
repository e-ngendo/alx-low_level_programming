#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: length
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
