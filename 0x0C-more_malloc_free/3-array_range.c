#include "holberton.h"
/**
 * array_range - array of intergers
 * @min: var
 * @max: var
 * Return: an array of ints
 */
int *array_range(int min, int max)
{
	int i = 0, x, *num;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	num = malloc(sizeof(int) * x);
	if (num == NULL)
	{
		free(num);
		return (NULL);
	}
	for (; i < x; i++, min++)
	{
		num[i] = min;
	}
	return (num);
}
