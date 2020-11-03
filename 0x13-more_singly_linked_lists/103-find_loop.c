#include "lists.h"

/**
 * find_listint_loop - finds where infinite loop starts
 * @head: pointer to head node
 * Return: pointer to beginning of loop or NULL otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = (listint_t *)head;

	while (head != NULL)
	{
		if (tmp < head)
		{
			return (head);
		}
		tmp = (listint_t *)head;
		head = head->next;
	}
	return (NULL);
}
