#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Represents the entry point of the function
 *Description: 'Indicates whether a number is positive or negative'
 *Return: 0 (Indicates success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
