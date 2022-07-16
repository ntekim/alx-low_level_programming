#include  "main.h"
#include <stdlib.h>
/**
 *  list_len - returns the number of elements in a linked list
 *  @h: pointer to the list_t list to loop through
 *
 *  Return: int - number of elements
 */

size_t list_len(const list_t *h)
{
        size_t n_nodes = 0;

        while (h)
        {
                n_nodes++;
                h = h->next;
        }

	return (n_nodes);
}
