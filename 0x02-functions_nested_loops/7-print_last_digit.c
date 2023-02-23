#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: the integer
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	int N;

	N = n % 10;

	if (N < 0)
	{
		N = -N;
	}

	_putchar(N + '0');
	return (N);
}
