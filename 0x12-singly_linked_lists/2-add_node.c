#include "main.h"
#include <stdio.h>
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
	list_t **prev_head;
	list_t **new_node;
	unsigned int n = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node):
		return (NULL);
	}
	if (str == NULL)
		str = ' ';

	while (head)
	{
		prev_head = head;
		new_node->str = strdup(str);	
		new_node->next = prev_head;
		n++;
		new_node->len = n;
		prev_node = new_node;
	}
	return (new_node);
}
