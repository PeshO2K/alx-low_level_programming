#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab;
	unsigned long int idx;

	if (size)
	{
		hash_tab = malloc(sizeof(hash_table_t));

		if (hash_tab)
		{
			hash_tab->size = size;
			hash_tab->array = malloc(sizeof(hash_node_t *) * size);

			if (hash_tab->array == NULL)
			{
				free(hash_tab);
				return (NULL);
			}

			for (idx = 0; idx < size; idx++)
			{
				hash_tab->array[idx] = NULL;
			}
		}
	}
	return (hash_tab);
}
