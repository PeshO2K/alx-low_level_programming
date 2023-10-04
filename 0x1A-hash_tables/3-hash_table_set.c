#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key string, cannot be an empty string
 * @value: value string, must be duplicated, can be an empty string
 *
 * Description: This function adds an element to the hash table. If a key
 * matches an existing key in the hash table, the function will replace
 * the value with the new one.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *curr, *new_node;

	if (ht || !strlen(key))
	{
		new_node = malloc(sizeof(hash_node_t));

		if (new_node)
		{
			idx = key_index((const unsigned char *)key, ht->size);
			curr = ht->array[idx];
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = NULL;

			while (curr != NULL)
			{
				if (strcmp(curr->key, key) == 0)
				{
					free(curr->value);
					curr->value = strdup(value);
					free(new_node->key);
					free(new_node->value);
					free(new_node);

					return (1);
				}
				curr = curr->next;
			}
			curr = ht->array[idx];
			new_node->next = curr;
			ht->array[idx] = new_node;
			return (1);
		}
	}
	return (0);
}
