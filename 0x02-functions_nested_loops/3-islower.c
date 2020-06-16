#include "holberton.h"
/**
* _islower - checks lowercase char
*
* @c: variable
*
* Return: 1
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
