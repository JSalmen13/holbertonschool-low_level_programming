#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - search
 * @s: char
 * @c: char 2
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		return (p);
		p++;
	}
	return (NULL);
}
