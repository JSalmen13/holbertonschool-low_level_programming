#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create array with constant char
 * @size: size of array
 * @c: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	/* You forgot checking for null array */
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
