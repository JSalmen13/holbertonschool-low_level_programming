#include "holberton.h"
/**
 * string_nconcat - concatenate 2 strings limited by n
 * @s1: str
 * @s2: str
 * @n: number of chars to concat
 * Return: dest
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i = 0, j = 0, k = 0, r = 0;

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}

	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	r = j - n;
	if (n >= j)
	{
		r = 0;
	}
	dest = malloc(((i + j + 1) - r) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (k < ((i + j) - r))
	{
		if (k < i)
		{
			dest[k] = s1[k];
			k++;
		}
		else
		{
			dest[k] = s2[k - i];
			k++;
		}
	}
	dest[k] = '\0';
	return (dest);
}
