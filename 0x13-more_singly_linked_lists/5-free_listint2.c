#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer of head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		(*head) = next;
	}
}
