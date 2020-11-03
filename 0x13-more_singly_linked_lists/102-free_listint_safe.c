#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head node
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *tmp;

	if (*h == NULL)
		return (0);
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
