#include "search_algos.h"

/**
  * make_jump - get pointer at position = jump
  * @list: node to make the jump from
  * @jump: value of the jump
  * Return: pointer to jump node
  */

listint_t *make_jump(listint_t *list, int jump)
{
	int i = 0;

	while (list->next && i < jump)
	{
		list = list->next;
		i++;
	}
	return (list);
}

/**
  * jump_list - jump search with linked lists
  * @list: pointer to head node
  * @size: size of the linked list
  * @value: value to find
  * Return: pointer to the node with value
  */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = sqrt((int)size), j;
	listint_t *j_node;
	char *msg = "Value found between indexes";

	if (!list)
		return (NULL);

	while (list->index < size)
	{
		j_node = make_jump(list, jump);
		printf("Value checked at index [%lu] = [%d]\n", j_node->index, j_node->n);
		if (j_node->index == size - 1 || j_node->n >= value)
		{
			printf("%s [%lu] and [%lu]\n", msg, list->index, j_node->index);
			for (j = 0; j <= jump; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", list->index, list->n);
				if (list->n == value)
					return (list);
				if (list->index == size - 1)
					return (NULL);
				list = list->next;
			}
		}
		list = j_node;
	}
	return (NULL);
}
