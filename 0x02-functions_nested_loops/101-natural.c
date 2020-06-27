#include <stdio.h>
/**
 * main - sum of all mul
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, m, k, l;

	i = 0;
	for (j = 0; j <= (1024 / 3); j++)
	{
		k = 3 * j;
		i = i + k;
	}
	for (m = 0; m <= (1024 / 5); m++)
	{
		if (!(m % 3 == 0))
		{
			l = 5 * m;
			i = i + l;
		}
	}
	printf("%i\n", i);
	return (0);
}
