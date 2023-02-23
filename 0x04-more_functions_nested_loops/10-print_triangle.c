#include <stdio.h>
#include "main.h"

/**
 * print_size - print triangle
 *@size: size of triangle
 * Return: Void
 */
void print_triangle(int size)
{
	int r, c;

	for (r = 0; r < size; r++)
	{
		for (c = 1; c < size; c++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
