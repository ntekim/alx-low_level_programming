#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: new node to add
 * @n: data to be added to new node
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->digit = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	
	while (temp->next)
		temp->next = new_node;

	temp->next = new_node;

	return (new_node);
}	
