#include "main.h"
/**
 * get_bit - return value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index < 63)
	{
		return ((n >> index) & 1);
	}

	return (-1);
}
