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
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (NULL);
}
