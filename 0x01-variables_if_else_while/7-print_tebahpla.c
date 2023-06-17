#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: 'Prints lowercase alphabet in reverse'
 */

int main(void)

{

	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);

}
