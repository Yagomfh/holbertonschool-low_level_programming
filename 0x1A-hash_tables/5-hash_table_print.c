#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: pointer to the hash table
  * Returns: void
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, c = 0;
	hash_node_t *nodes;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		nodes = ht->array[i];
		while (nodes)
		{
			if (c != 0)
				printf(", ");
			printf("'%s': '%s'", nodes->key, nodes->value);
			nodes = nodes->next;
			c++;
		}
		i++;
	}
	printf("}\n");
}
