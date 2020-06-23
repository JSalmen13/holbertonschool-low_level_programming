
#include "holberton.h"
/**
*rev_string - 0
*@s: string
*
*/
void rev_string(char *s)
{
	char c;
	int i, k;

	i = 0;
	while (s[i + 1] != '\0')
	{
		i++;
	}

	k = i;
	i = 0;
	while (i < k / 2 + 1)
	{
		c = s[i];
		s[i] = s[k - i];
		s[k - i] = c;
		i++;
	}
}
