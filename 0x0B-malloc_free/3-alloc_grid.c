#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = (int **) malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
