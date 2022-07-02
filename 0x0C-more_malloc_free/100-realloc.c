#include "main.h"
#include <stdlib.h>
/**
 * _realloc - program reallocates memory bloc using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p_store;
	char *mem_cpy, *filler;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p_store = malloc(new_size);

		if (p_store == NULL)
			return (NULL);

		return (p_store);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	mem_cpy = ptr;

	p_store = malloc(sizeof(*mem_cpy) * new_size);

	if (p_store == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = p_store;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *mem_cpy++;

	free(ptr);
	return (p_store);
}
