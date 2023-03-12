#include "main.h"
#include <stdio.h>

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string segment to search through
 * @accept: characters to find in segment
 * Return: total count of occurrences
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;

	while (*s != ',' && *s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				/* putchar(*s);*/
				count++;
			}
		}
		s++;
	}
	return (count);
}
