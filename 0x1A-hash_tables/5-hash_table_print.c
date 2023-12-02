#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: No Return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h_node;
	int com = 0;
	unsigned long int x;

	if (!ht)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		h_node = ht->array[x];
		while (h_node)
		{
			if (com)
				printf(", ");
			printf("'%s': '%s'", h_node->key, h_node->value);
			h_node = h_node->next;
			com = 1;
		}
	}
	printf("}\n");
}
