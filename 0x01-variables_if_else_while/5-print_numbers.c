#include <stdio.h>
/**
 *main - Indicates entry point
 *Description: 'prints all single digit numbers of base 10'
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
