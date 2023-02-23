#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		int a = 97;

		while  (a <= 122)
		{
			putchar(a);
			a++;
		}
		putchar('\n');
	}
}
