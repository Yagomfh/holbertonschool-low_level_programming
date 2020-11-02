#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index of the node, starting at 0
 * Return: the node at index or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (i < index || node == NULL)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (NULL);
	return (node);
}
