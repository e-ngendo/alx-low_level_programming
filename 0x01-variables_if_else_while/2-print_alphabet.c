#include <stdio.h>
/**
 *main - Marks the entry point
 *Description: 'Command prints out the alphabet in lowercase'
 *Return: The value is always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
