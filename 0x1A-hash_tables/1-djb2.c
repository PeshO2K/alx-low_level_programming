#include "hash_tables.h"
/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Description: This function implements the djb2
 * algorithm (one of the best
 * string hashing functions). It takes a string and
 * returns an unsigned
 * long int that can be used as a hash value.
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
