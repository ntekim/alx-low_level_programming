#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: new node to be added
 * @n: integer to be added to new node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->digit = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
