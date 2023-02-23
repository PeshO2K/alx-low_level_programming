#include <stdio.h>
#include "main.h"

/**
 * _islower - returns 1 if c is lower
 * 
 * Return: Always 0
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
