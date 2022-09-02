#include "lists.h"
/**
 * add_dnodeint - program adds a new node at the beginning
 * of a doubly linked list
 * @head: doubly list to work with
 * @n: data to be added to new list
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new_node;

	return (new_node);
}
