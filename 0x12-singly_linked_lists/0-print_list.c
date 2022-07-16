#include <stdio.h>
#include "main.h"
/**
 *  print_list - prints all elements of a linked list
 *  @h: pointer to the list_t list to print
 *
 *  Return: int - number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n_nodes;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
