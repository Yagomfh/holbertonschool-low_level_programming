#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to head node;
 * Return. the sum or 0 if list empty
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
