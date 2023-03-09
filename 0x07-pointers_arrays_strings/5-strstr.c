#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: a pointer to the beginning
 * of the located substring, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;

		if (needle[i] == haystack[i])
		{
			while (needle[i] == haystack[i])
			{
				/*putchar (needle[i]);*/
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}

		}
		haystack++;
	}
	return (NULL);
}
