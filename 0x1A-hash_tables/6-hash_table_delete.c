#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: No Return
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *h_node, *tmp;
	unsigned long int x;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		h_node = ht->array[x];
		while (h_node)
		{
			tmp = h_node->next;
			free(h_node->key);
			free(h_node->value);
			free(h_node);
			h_node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
