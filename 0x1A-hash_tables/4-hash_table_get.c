#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: pointer to hash table
  * @key: key to look for
  * Return: value associated with the element
  * or NULL if key couldn’t be found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *i_nodes;

	index = key_index((unsigned char *)key, ht->size);

	i_nodes = ht->array[index];
	while (i_nodes)
	{
		if (strcmp(i_nodes->key, key) == 0)
			return (i_nodes->value);
		i_nodes = i_nodes->next;
	}
	return (NULL);
}
