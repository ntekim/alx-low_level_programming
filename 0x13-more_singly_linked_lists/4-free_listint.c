#include <stdlib.h>
#include "main.h"
/**
 * free_listint - frees a listint-t list
 * @head: linked list to free
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
