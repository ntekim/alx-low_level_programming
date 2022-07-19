#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list of type listint_t to work with
 *
 * Return: int number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
