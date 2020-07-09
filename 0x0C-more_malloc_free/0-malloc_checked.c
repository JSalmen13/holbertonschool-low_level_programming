#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check if malloc fail
 * @b: int
 * Return: always success on every project
 */
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
	{
	exit(98);
	}
	else
	return (x);
}
