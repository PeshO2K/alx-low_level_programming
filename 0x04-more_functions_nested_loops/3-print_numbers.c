#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 - 9 
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int n;
	
	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
