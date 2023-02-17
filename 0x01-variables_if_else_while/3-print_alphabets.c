#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	
	return (0);
}
