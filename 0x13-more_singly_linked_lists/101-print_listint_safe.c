#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head node
 * Return: number of nodes in the list
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *tmp = (listint_t *)head;

	while (head != NULL)
	{
		if (tmp < head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		tmp = (listint_t *)head;
		head = head->next;
		i++;
	}
	return (i);
}
