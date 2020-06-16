#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, u, y;

	for (i = 0; i < 10; i++)
	{
		for (u = 0; u < 10; u++)
		{
		y = u * i;
			if (y < 10)
				{
				_putchar(y + '0');
				if (u != 9)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					}
				}
			else
				{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
				if (u != 9)
					{
					_putchar(',');
					_putchar(' ');
					}
				}
		}
	_putchar('\n');
	}
}
