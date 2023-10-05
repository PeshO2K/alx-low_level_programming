#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Description: This function prints each key/value pair in the order they
 * appear in the array of the hash table.
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int idx, arr = 0;

	if (ht)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			curr = ht->array[idx];
			if (curr)
			{
				for (; curr; curr = curr->next)
				{
					if (arr)
					{
						printf(", ");
					}
					printf("'%s': '%s'", curr->key, curr->value);
					arr = 1;
				}
			}
		}
		printf("}\n");
	}
}
