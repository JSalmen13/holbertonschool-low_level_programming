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
	while (i <= (max - min))
	{
		num[i] = j;
		j++;
		++i;
	}
	return (num);
}
