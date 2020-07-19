#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all args
 * @n: insigned int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(k, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(k, int);
		i++;
	}
	va_end(k);
	return (sum);
}
