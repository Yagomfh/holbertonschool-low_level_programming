#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head node
 * Return: number of nodes in the list
 * If the function fails, exit the program with status 98
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
