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
	int **p_arr;
	int h = 0, w = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	p_arr = malloc(height * sizeof(int *));

	if (p_arr == NULL)
		return (NULL);

	for (; h < height; h++)
	{
		p_arr[h] = malloc(sizeof(int) * width);

		if (p_arr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(p_arr[h]);

			free(p_arr);

			return (NULL);
		}

		for (; w < width; w++)
                        p_arr[h][w] = 0;
	}

	return (p_arr);
}
