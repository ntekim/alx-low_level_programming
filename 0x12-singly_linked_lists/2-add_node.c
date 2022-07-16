#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer of new node
 * @str: data of new node
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int n = 0;

	while (str[n]
		n++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = n;	
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
