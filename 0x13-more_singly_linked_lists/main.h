#ifndef MAIN_H
#define MAIN_H
/**
 * struct listint_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list for
 * ALX project
 */
typedef struct listint_s
{
	int *str;
	unsigned int len;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_t_len(const listint_t *h);
#endif
