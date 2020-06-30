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
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		return (&s[i]);
		i++;
	}
	return (NULL);
}
