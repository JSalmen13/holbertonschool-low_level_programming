#include "holberton.h"
/**
 * array_range - array of intergers
 * @min: var
 * @max: var
 * Return: an array of ints
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *num;

	if (min > max)
		return (NULL);
	num = malloc(sizeof(int) * (max - min + 1));
	if (num == NULL)
	{
		free(num);
		return (NULL);
	}
	for (; i < (max - min + 1); i++, min++)
	num[i] = min;
	return (num);
}
