#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: the linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
