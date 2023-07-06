#include "main.h"


void print_binary(unsigned long int n)
{
	printf("n = %lu\n",n);
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	printf(" %lu\n", (n&1));
	
	putchar((n & 1) + '0');
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
