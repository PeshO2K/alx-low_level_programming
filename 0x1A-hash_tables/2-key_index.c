#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key string
 * @size: size of the array of the hash table
 *
 * Description: This function uses the djb2 hash value and the size of the
 * array to return the index at which the key/value pair should be stored
 * in the array of the hash table.
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int pos;

	pos = hash_djb2(key) % size;
	return (pos);
}
