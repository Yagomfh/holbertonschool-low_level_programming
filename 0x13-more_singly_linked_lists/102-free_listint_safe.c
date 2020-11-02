#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @h: pointer to head node
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *tmp;

	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		i++;
		if (*h > tmp)
		{
			free(tmp);
			break;
		}
		free(tmp);
	}
	(*h) = NULL;
	return (i);
}
