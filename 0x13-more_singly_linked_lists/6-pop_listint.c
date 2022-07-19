#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first element in the linked list
 *
 * Return: data inside the element that was deleted
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->digit;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
