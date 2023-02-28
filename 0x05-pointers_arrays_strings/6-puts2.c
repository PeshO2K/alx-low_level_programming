#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a char and skips next then new line
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar (*str);
		str += 2;
	}
	putchar ('\n');
}
