#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal
 * @n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\');
		n--;
	}
	_putchar('\n');
}
