#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: 'Prints all single digit numbers of base 10 starting from 0'
 */

int main(void)

{

	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
