#include "lists.h"
/**
 * insert_dnodeint_at_index - program insert a new node at a given position
 * @h: list to work with
 * @idx: indes of the list where the new node will be added
 * @n: data of new node
 *
 * Return : address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
		return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; current_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (current_node->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node->next = current_node->next;
	       		new_node->prev = current_node;
			current_node->next->prev = new_node;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	return (new_node);
}
