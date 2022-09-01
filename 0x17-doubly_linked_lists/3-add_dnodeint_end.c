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
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	last = malloc(sizeof(dlistint_t));
	if (!new || !last || !n)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}

	last = *head;

	while (last && last->next != NULL)
	{
		printf("%d\n", last->n);
		last = last->prev;
	}

	last->next = new;
	new->prev = last;
	/*printf("%d\n", (*head)->n);*/
	return (new);
}	
