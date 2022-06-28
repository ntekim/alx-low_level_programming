#include "main.h"
#include <stdlib.h>
/**
 * create_array - Program creates an array of chars,
 *  initialize it with a specific char
 *  @size: number of memory space to allocate
 *  @c: type of byte to allocate - char
 *
 *  Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

