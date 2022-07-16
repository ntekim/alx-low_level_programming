#include <stdio.h>
#include "main.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list to work with
 *
 * Return: int - number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t new;
	size_t n;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->digit);
		h = h->next;
		n++;
	}

	return (n);
}
