#include "lists.h"

/**
  * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
  * @head: pointer to head node
  * Return: sum of data
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
