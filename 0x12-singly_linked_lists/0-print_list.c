#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: the linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elem = 0;

	if (h == NULL)
		return (elem);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			elem++;
			h = h->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		elem++;
		h = h->next;
	}
	return (elem);
}
