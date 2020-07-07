#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 *
 * @i: variable
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	return (i);
}
