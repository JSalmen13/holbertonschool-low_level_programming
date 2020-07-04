#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - str to int
 * @s: str
 * Return: int
 */
int _atoi(char *s)
{
	int n, i, sign;

	sign = 1;
	i = n = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	sign = sign * -1;
	return (n * sign);
}
