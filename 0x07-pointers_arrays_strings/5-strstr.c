#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - find occurence
 * @haystack: str 1
 * @needle: str 2
 * Return: occurance
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	j = 0;
	if(needle[0] == '\0')
	return (haystack);
	for (k = 0; needle[k]; k++)
	;
	for (i = 0; haystack[i]; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 0; needle[j]; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					break;
				}
			}
		}
		if (j == k)
		return (&haystack[i]);
	}
return (0);
}
