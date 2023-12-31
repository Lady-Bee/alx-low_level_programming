#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)

		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)

				free(arr[i]);
			free(arr);
			return (NULL);
		}

	}
		for (i = 0; i < height; i++)

	{
		for (y = 0; y < width; y++)
		arr[i][y] = 0;

	}
		return (arr);
}
