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

	if (n < 0)
	{
		n = -n;
	}
	N = n % 10;

	_purchar(N);
	return (N);
}
