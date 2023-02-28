#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse followed by new line
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
