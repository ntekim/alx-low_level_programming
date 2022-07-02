#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - program allocates memory for an array using malloc
 * @nmemb: number of members to be allocated memery for
 * @size: data type
 *
 * Return: pointer or Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, sp_alloc = nmemb * size;
	char *mem_cpy;
	void *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(nmemb * size);

	if (calloc == NULL)
		return (NULL);

	mem_cpy = calloc;

	for (i = 0; i < sp_alloc; i++)
		mem_cpy[i] = 0;

	return (calloc);
}


