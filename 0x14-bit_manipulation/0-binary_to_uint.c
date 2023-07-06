#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0 ;
	int i;


	if (b != NULL)
	{
		
		for (i = (strlen(b) - 1); i >= 0; i--)
		{
			if (b[i] != '0'  && b[i] != '1')
			{
				return (0);
			}
			if (b[i] == '1')
			{
			val |= (1 << (strlen(b) - 1 - i));
			}
		}
	}
	return (val);
}
