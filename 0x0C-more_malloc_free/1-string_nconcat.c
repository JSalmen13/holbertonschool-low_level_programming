#include "holberton.h"
char *a1(char *s1, char *s2, unsigned int i, unsigned int j,
unsigned int n, unsigned int k, unsigned int len)
{
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
/**
 * string_nconcat - string contact
 * @s1: str
 * @s2: str
 * @n: int
 * Return: success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, len = 0;
	char *dest;

	if (s1 != NULL)
	{
		return (a1(s1, s2, i, j, n, k, len));
	}
	else
	{
		while (s2[j])
			j++;
		if (j > n)
			k = n;
		else
			k = j;
		dest = malloc(k + 1);
		if (dest != NULL)
		{
			for (len = 0; len < k; len++)
			dest[len] = s2[len];
			dest[len] = '\0';
			return (dest);
		}
		else
			return (NULL);
	}
	return (NULL);
}
