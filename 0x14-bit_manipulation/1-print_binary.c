#include "main.h"
/**
 * print_binary - prints binary equivalent
 * of a number
 * @n: unsigned long int
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
	/* alternate solution:buggy
	*int i = 0, binary[64];
*	while (n > 0)
*	{
*		binary[i] = (n & 1);
*		n >>= 1;
*		i++;
*	}
*	i--;
*	while (i >= 0)
*	{
*		putchar(binary[i] + '0');
*		i--;
*	}
	*/
}
