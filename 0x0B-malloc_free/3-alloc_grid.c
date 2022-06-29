#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to 2 dimensional array
 * @width: first parameter
 * @height: second parameter
 *
 * Return: 0 (success)
 */

int **alloc_grid(int width, int height)
{
	char **p_arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	p_arr = malloc(width * height * sizeof(int));

	if (p_arr == NULL)
		return (NULL);

	while (i < height)
	{
		while (j < width)
		{
			p_arr[i][j] = 0;
			j++;
		}

		i++;
	}

	return (p_arr);
}
