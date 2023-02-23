#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: Character being checked
 * Return: 1 if alpabetic charcater, 0 otherwise */
int _isalpha(int c)
{
	return (c >= 65 && c <= 90 || c >= 97 && c <= 122);
}
