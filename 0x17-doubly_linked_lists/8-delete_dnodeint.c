#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: pointer to head node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h->next)
	{
		len++;
		h = h->next;
	}
	len++;
	return (len);
}

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index where to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int list_len = dlistint_len(*head), idx = index;
	dlistint_t *current = *head;

	if (index > list_len || list_len == 0)
		return (-1);

	if (list_len == 1)
	{
		free(current);
		*head = NULL;
		return (1);
	}

	while (index != 0)
	{
		current = current->next;
		index--;
	}
	if (idx == 0)
	{
		current->next->prev = NULL;
		*head = current->next;
	}
	else if (idx == list_len)
		current->prev->next = NULL;
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
