#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - str duplicate
 * @str: string
 * Return: a copy of str
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
	len++;
	len++;
	str2 = malloc(sizeof(char) * len);
	if (str2 == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
