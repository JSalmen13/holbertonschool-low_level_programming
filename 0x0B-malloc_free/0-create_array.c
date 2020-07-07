#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create array with constant char
 * @size: size of array
 * @c: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	
	if (size == 0)
	return (NULL);
	else
	s = malloc (size * sizeof(char));
	return (s);
}