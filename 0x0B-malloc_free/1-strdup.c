#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - str duplicate
 * @str: string
 * Return: a copy of str
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	str2 = malloc(sizeof(str));
	if (str2 == NULL)
		return (NULL);
	while(str[i])
	{
	str2[i] = str[i];
	i++;
	}
	return (str2);
}
