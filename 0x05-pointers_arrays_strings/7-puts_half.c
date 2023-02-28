#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints asecond half of string then new line
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i = 0, j;

	while (str[i++])
	{
		len++;
	}
	if (len % 2 == 0)
	{
		j = len / 2;
	}
	else
	{
		j = (len + 1) / 2;
	}
	for (i = j; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar ('\n');
}
