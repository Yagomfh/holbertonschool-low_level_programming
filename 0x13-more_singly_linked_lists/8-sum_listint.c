#include "lists.h"

/**
 * sum_listint - number of elements in a linked
 * @head: linked list to parse
 * Return: number of elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
