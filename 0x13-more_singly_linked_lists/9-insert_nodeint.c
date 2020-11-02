#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to head node
 * @n: int to add to node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

/**
 * add_nodeint_e - adds a new node at the end of a listint_t list
 * @head: pointer to head node
 * @n: int to add to new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_e(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head node
 * @idx: index where to add new node
 * @n: data of new node
 * Return: address of the new node, or NULL if it failed
 * if not possible to add return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *current = *head;
	listint_t *next;
	unsigned int i = 1;

	if (idx == 0)
		return (add_nodeint(&(*head), n));
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	while (i < idx)
	{
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;
		i++;
	}

	newNode->n = n;
	if (current->next != NULL)
	{
		next = current->next;
		current->next = newNode;
		newNode->next = next;
	}
	if (current->next == NULL)
	{
		free(newNode);
		return (add_nodeint_e(&(*head), n));
	}
	return (newNode);
}
