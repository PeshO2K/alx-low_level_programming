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
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	ar = malloc(i + 1);

	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (*str)
	{
		ar[i] = *str;
		i++;
		str++;
	}
	return (ar);
}
