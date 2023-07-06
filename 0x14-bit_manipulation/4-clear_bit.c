#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n != NULL && (index < (sizeof(unsigned long int) * 8) - 1))
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}

