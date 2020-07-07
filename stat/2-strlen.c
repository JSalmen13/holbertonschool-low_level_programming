#include "holberton.h"
/**
 * _strlen - lengh of string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
return (i);
}
