#include "lists.h"
/**
 * get_dnodeint_at_index - program return node of a doubly list at index 
 * @head: node to work with
 * @index: index of the node
 *
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int len = 0;

	if (!head)
		return (NULL);

	if (index == 0)
	{
		current->n = head->n;
		current->next = NULL;
		current->prev = NULL;
	}

	while (head->next)
	{
		if (index > len)
			return (NULL);

		if (len == index)
			current = head;

		head = head->next;

		len++;
	}

	return (current);
				
}
