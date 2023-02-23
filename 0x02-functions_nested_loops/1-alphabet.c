#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet- prints alpahabet in lower case
 * 
 * Return: Always 0
 */
void print_alphabet(void)
{
	int a = 97;
	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
