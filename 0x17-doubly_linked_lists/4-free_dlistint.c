#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to head node
  * Return: void
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current->next)
	{
		head = current->next;
		free(current);
		current = head;
	}
	free(current);
}
