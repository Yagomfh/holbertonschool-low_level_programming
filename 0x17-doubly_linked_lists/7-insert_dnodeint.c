#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: pointer to head node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h->next)
	{
		len++;
		h = h->next;
	}
	len++;
	return (len);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head node
 * @idx: index where to add new node
 * @n: data of new node
 * Return: pointer to new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int list_len = dlistint_len(*h);

	if (idx == list_len)
		return (add_dnodeint_end(h, n));

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || idx > list_len)
		return (NULL);

	new->n = n;
	while (idx != 0)
	{
		current = current->next;
		idx--;
	}
	new->prev = current->prev;
	new->next = current;
	current->prev->next = new;
	current->prev = new;
	return (new);
}
