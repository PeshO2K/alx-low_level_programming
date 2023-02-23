#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 *  @c: the character
 * Return: 1 if lower case otherwise 0
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
