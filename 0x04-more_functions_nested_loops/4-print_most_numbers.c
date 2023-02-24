#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints all numbers except 2 & 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if ((n != '2') && (n != '4'))
		{
			putchar(n);
		}
	}
	putchar('\n');
}
