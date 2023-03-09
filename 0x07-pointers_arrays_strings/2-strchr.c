#include "main.h"
#include <stdio.h>

/**
 * _strchr - return first occurrence of character
 * @c: character to be found
 * @s: character string
 * Return: NULL if not found otherwise pointer.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
