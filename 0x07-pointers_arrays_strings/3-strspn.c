#include "holberton.h"
/**
 * _strspn - lengh in bytes
 * @s: str
 * @accept: char
 * Return: nbr bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int c1, c2, k = 0, tmp;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		tmp = k;
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2])
			k++;
		}
		if (tmp == k)
		return (tmp);
	}
	return (k);
}
