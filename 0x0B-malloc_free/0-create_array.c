#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	ar = malloc((size) * sizeof(char));
	
	if (ar == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
