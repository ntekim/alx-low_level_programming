#include  "main.h"
#include <stdio.h>
/**
 *  list_len - returns the number of elements in a linked list
 *  @h: pointer to the list_t list to loop through
 *
 *  Return: int - number of elements
 */

size_t print_list(const list_t *h)
{
        size_t n_nodes;

        while (h)
        {
                if (h->str == NULL)
                        printf("[0] (nil)\n");
                h = h->next;
                n_nodes++;
        }

	return (n_nodes);
}
