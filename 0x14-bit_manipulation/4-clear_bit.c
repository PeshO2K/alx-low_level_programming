#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n != NULL && (index < (sizeof(unsigned long int) * 8) - 1))
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}

