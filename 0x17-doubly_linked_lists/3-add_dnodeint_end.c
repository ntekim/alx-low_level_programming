#include "lists.h"
/**
 * add_dnodeint_end - program adds a new node
 * at the end of a dlistint_t list
 * @head: list to work with
 * @n: data to be added to new node
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next)
	{
		last = last->next;
	}

	last->next = new;
	new->prev = last;

	return (new);
}
