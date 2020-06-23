#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy
 * @dest: int
 * @src: int
 * Return : aaaa
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
