#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @b: the constant byte
 * @s: pointer to memory area
 * @n: number of bytes
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
