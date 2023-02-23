#include <stdio.h>
#include "main.h"

/**
 * print_size - print triangle
 *@size: size of triangle
 * Return: Void
 */
void print_triangle(int size)
{
	int r, c, h;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			c = size - r;
			h = r;

			while (c > 0)
			{
				_putchar(' ');
				c--;
			}
			while (h > 0)
			{
				_putchar('#');
				h--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
