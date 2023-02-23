#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if character is a digit
 *@c: character in review
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= 48) && (c <= 58));
}
