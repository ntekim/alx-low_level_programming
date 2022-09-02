#include "lists.h"
/**
 * sum_dlistint - program returns the sum of all data of a doubly linked list
 * @head: list to work with
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	
	sum += head->n;

	return (sum);
}
