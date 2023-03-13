#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *ar;
	int i = 0;

	ar = malloc(sizeof(*str));

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
