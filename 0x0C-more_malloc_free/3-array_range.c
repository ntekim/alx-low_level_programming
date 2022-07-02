#include "main.h"
#include <stdlib.h>
/**
 * array_range - program creates an array of integers
 * @min: lowest value to be included
 * @max: highest value to be included
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p_array, i, len = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;

	p_array = malloc(sizeof(int) * len);

	if (p_array == NULL)
		return (NULL);

	len = -1;

	for (i = min; i < max; i++)
		p_array[len++] = i;
