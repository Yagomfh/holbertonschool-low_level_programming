#include "search_algos.h"

/**
  * jump - calculates jump value
  * @list: pointer to node
  * @total: total nodes so far
  * Return: total nodes + jump
  */

size_t jump(skiplist_t *list, size_t total)
{
	size_t len = 0 + total;

	while (list->next)
	{
		list = list->next;
		len++;
	}
	return (len);
}

/**
  * linear_skip - linear skip algorithm
  * @list: linked list to look into
  * @value: value to look for
  * Return: pointer to node with value searched or NULL
  */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *jump_n;
	char *msg = "Value found between indexes";

	if (!list)
		return (NULL);

	while (list->express)
	{
		jump_n = list->express;
		printf("Value checked at index [%lu] = [%d]\n", jump_n->index, jump_n->n);
		if (jump_n->n >= value)
		{
			printf("%s [%lu] = [%lu]\n", msg, list->index, jump_n->index);
			while (list->n <= jump_n->n)
			{
				printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
				if (list->n == value)
					return (list);
				list = list->next;
			}
		}
		list = jump_n;
	}
	printf("%s [%lu] and [%lu]\n", msg, list->index, jump(list, list->index));
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
