#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal
 * @n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while ((n - 1) > 0)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
