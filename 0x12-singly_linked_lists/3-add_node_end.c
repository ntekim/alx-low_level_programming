#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	unsigned int n;

	while (str[n])
		n++;

	temp = *head;
	new = malloc(sizeof(list_t);
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp->next = new;
	
	temp->next = new;

	return (new);
}
