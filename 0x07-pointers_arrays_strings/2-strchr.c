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
	while (s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
