#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - main func
 * @width: width of array
 * @height: height of array
 * Description: 2d array with all zeros
 * Return: Null or array
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int *p;

	p = malloc(sizeof(int) * (height * width));

	if (p == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (; i < height; i++)
	{
		for (; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
