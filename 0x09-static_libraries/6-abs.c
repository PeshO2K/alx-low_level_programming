#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _abs - computes absolute value of integer
 *
 * @n: Integer
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
