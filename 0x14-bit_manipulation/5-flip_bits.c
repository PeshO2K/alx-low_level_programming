#include "main.h"
/**
 * flip_bits - returns the number of bits required
 * to be flipped to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int flipped_bits = 0;

	while (flipped)
	{
		if (flipped & 1)
		{
			flipped_bits++;
		}
		flipped >>= 1;
	}
	return (flipped_bits);
}
