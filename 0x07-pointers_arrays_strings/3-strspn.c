#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
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
