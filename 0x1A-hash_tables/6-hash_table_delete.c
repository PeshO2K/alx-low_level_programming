#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Description: This function deletes a hash table.
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *curr, *del;

	if (ht)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			del = ht->array[idx];
			if (del)
			{
				curr = del;
				for (; del; del = curr)
				{
					curr = del->next;
					free(del->key);
					free(del->value);
					free(del);
				}
			}

		}
		free(ht->array);
		free(ht);
	}
	/* function body here */
}
