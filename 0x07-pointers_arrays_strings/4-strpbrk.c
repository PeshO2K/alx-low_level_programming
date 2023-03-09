#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string segment to search through
 * @accept: characters to find in segment
 * Return: pointer of match in s, NULL otherwise.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (s++/**s >= '\0'*/)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		/* s++;*/
	}
	return (NULL);
}
