#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array.
 * @height: hright of the array.
 *
 * Return: pointer of an array.
 */
int **alloc_grid(int width, int height)
{
	int **isarray;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	isarray = malloc(sizeof(int) * height);

	if (isarray == NULL)
	{
		free(isarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		isarray[i] = malloc(sizeof(int) * width);
		if (isarray == NULL)
		{
			free(isarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			isarray[i][n] = 0;
		}
	}
	return (isarray);
}
