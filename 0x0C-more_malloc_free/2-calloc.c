#include "main.h"
#include <stdlib.h>
/**
 * _calloc - program allocates memory for an array using malloc
 * @nmemb: number of members to be allocated memery for
 * @size: data type
 *
 * Return: pointer or Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *calloc, i, sp_alloc = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(sizeof(size) * nmemb);

	if (calloc == NULL)
		return (NULL);

	for (i = 0; i < sp_alloc; i++)
		calloc[i] = 0;

	return (calloc);
}


