#include "holberton.h"
/**
* more_numbers- prints numbers x10
*
* Return: 0
**/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			
		}
		_putchar('\n');
	}
}
