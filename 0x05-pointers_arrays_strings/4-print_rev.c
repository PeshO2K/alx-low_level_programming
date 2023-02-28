#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse followed by new line
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(*s);
	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');


}
