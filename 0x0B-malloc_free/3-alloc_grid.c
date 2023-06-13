#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: input of width
 * @height: input of height
 * Return: pointer to 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ptArray;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptArray = malloc(sizeof(int *) * height);

	if ptArray == (NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptArray[x] = malloc(sizeof(int) * width);

		if (ptArray[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptArray[x]);

			free(ptArray);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptArray[x][y] = 0;
	}

	return (ptArray);
}
