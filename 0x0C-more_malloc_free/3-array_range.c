#include "holberton.h"
/**
 * array_range - array of intergers
 * @min: var
 * @max: var
 * Return: an array of ints
 */
int *array_range(int min, int max)
{
	int *num;
	int i = 0, j;

	if (min > max)
		return (NULL);
	num = malloc(((max - min) + 1) * sizeof(int));
	if (num == NULL)
		return (NULL);
	j = max;
	for (i = 0; i <= (max - min); ++i)
		{
			num[i] = j;
			j++;
		}
	return (num);
}
