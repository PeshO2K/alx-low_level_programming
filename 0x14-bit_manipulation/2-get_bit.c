#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
		
	if (index < 63)
	{
		return ((n >> index) & 1);
	}

	return (-1);
}
