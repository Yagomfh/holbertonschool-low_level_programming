#include "lists.h"

/**
* _strlen - the length of a string
* @s: the string
*
* Return: the lenght of the string
*/

int _strlen(const char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

/**
 * add_node_end - adds a new node at
 * the end of a list_t list
 * @head: point to head node
 * @str: string to add to node
 * Return: address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
