#include <stdio.h>
/**
 *main - Indicates the entry point
 *Description: 'Prints the alphabet in lowercase then uppercase'
 *Return: 0
 */
int main(void)
{
	int n1 = 97;
	int n2 = 65;

	while (n1 <= 122)
	{
		putchar(n1);
		n1++;
	}
	while (n2 <= 90)
	{
		putchar(n2);
		n2++;
	}
	putchar('\n');
	return (0);
}
