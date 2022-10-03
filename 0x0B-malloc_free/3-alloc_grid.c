#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to return pointer of a 2d array
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL for failure or 0/ neg height/ width
 */

int **alloc_grid(int width, int height)
{
	int **nm;
	int a, b;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	nm = malloc(height * sizeof(int *));
	if (nm == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		nm[a] = malloc(width * sizeof(int));
		if (nm[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(nm[b]);
			free(nm);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			nm[a][b] = 0;
	}
	return (nm);
}
