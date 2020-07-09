#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - string contact
 * @s1: str
 * @s2: str
 * @n: int
 * Return: success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, len;
	char *dest;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
	k = n;
	else
	k = j;
	dest = malloc(i + k + 1);
	if (dest != NULL)
	{
		for (len = 0; s1[len]; len++)
		dest[len] = s1[len];
		for (; len < i + k; len++)
		dest[len] = s2[len - i];
		dest[len] = '\0';
		return (dest);
	}
	else
	return (NULL);
}
