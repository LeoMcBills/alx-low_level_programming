#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width input
 * @height: height input
 * Return: Pointer to 2 dimensional arrays
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);
			free(mee);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			mee[x][y] = 0;
		}
	}
	return (mee);
}
