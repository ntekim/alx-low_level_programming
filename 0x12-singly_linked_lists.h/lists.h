#ifndef LISTS_H
#define LISTS_H
<<<<<<< HEAD:0x12-singly_linked_lists/lists.h

=======
#include <stddef.h>
>>>>>>> 6c6af2601cd6bfd8e5fab8adbb109f5cf9d2a816:0x12-singly_linked_lists.h/lists.h
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
