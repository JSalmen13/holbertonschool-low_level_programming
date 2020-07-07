#include "holberton.h"
/**
* _strpbrk - locate 1st occur
* @s: str
* @accept: str
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			return (&(s[i]));
		}
	}
	return (0);
}
