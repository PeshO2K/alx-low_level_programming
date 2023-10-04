#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key string, cannot be an empty string
 *
 * Description: This function retrieves the value associated with a key
 * in the hash table.
 *
 * Return: value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr;

	if (ht || !strlen(key))
	{
		idx = key_index((const unsigned char *)key, ht->size);
		curr = ht->array[idx];

		if (curr)
		{
			while ((strcmp(key, curr->key) != 0) && curr->next != NULL)
			{
				curr = curr->next;
			}
			return (curr->value);
		}
	}
	return (NULL);
}
