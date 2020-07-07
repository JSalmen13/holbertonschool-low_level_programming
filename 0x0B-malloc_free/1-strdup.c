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
		return (0);
	str2 = malloc(sizeof(str));
	if (str2 == NULL)
		return (0);
	for (i = 0; i < strlen(str); i++)
	str2[i] = str[i];
	return (str2);
}
