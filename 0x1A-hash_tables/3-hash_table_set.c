#include "hash_tables.h"

/**
 * add_node - adds a new node
 * at the beginning of a hash_node_t list
 * @head: the linked list head
 * @key: the key
 * @value: value associated with the key
 * Return: address of the new element or NULL if it failed
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = (*head);
	(*head) = new_node;
	return ((*head));
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: the key
 * @value: value associated to the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (strlen(key) == 0 || key == NULL)
		return (0);
	if (ht == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
	}

	new_node = add_node(&(ht->array[index]), key, value);
	if (new_node == NULL)
		return (0);

	return (1);
}
