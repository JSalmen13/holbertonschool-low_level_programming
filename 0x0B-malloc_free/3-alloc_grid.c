#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - 2d array
* @width: size
* @height: size.
* Return: array
*/

int **alloc_grid(int width, int height)
{
	int **r;
	int i, k, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	r = malloc(sizeof(int *) * height);
	if (r == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		r[i] = malloc(sizeof(int) * width);
		if (r[i] == NULL)
		{
			for (k = 0; k < i; k++)
			free(r[k]);
			free(r);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		r[i][j] = 0;
	}
	return (r);
}
