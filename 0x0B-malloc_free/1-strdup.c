#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0, len = 0;
	
	while (str[len])
	{
		len++;
	}
		
	
	ar = malloc(len + 1);

	if (str == NULL || ar == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		ar[i] = *str;
		i++;
		str++;
	}
	return (ar);
}
