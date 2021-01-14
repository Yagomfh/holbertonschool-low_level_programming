#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table
  * @ht: pointer to the hash table
  * Return: void
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *cnode, *nnode;

	while (i < ht->size)
	{
		cnode = ht->array[i];
		while (cnode)
		{
			nnode = cnode->next;
			free(cnode->key);
			free(cnode->value);
			free(cnode);
			cnode = nnode;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
