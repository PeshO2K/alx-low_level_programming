#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal
 * @n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
	int r, c;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			c = r;

			while (c > 0)
			{
				_putchar(' ');
				c--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
