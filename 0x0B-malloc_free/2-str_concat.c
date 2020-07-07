#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 */
char *str_concat(char *s1, char *s2)
{
	char *p3;
	unsigned int i, j, len = 0, len1 = 0;

	while (s1[len])
	len++;
	while (s2[len1])
	len1++;
	p3 = malloc(sizeof(char) * (len + len1 + 1));
	for(i = 0; i < len; i++)
		p3[i] = s1[i];
	for(j = i; j < (len + len1); j++)
		p3[j] = s2[j - i];
	p3[i + j] = '\0';
	return (p3);
}
