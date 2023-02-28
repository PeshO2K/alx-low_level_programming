#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a char and skips next then new line
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
	{
		len++;
	}
	for (i = len; i < len; i+=2)
	{
		putchar(str[i]);
	}
	putchar ('\n');
}
