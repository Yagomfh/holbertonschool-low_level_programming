#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *current = *head;
	listint_t *next;

	if (*head == NULL)
		return (0);
	next = current->next;
	value = current->n;
	free(current);
	*head = next;
	return (value);
}
