#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of parameters passed in
 * @a: pointer to first integer
 * @b: pointer to second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int ap = *a;
	*a = *b;
	*b = ap;

}
