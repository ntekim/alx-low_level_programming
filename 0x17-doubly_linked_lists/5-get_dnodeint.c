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
	unsigned int len = 0;

	if (!head)
		return (NULL);

	while (head->next && len < index)
	{
		head = head->next;
		len++;
	}

	return (head ? head : NULL);
}
