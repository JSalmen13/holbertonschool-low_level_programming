#include "variadic_functions.h"
/**
 * print_strings - prints string with sep
 * @separator: sep
 * @n: int
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list k;
	unsigned int i = 0;
	char *p;

	va_start(k, n);
	while (i < n)
	{
		p = (va_arg(k, char *));
		if (p == NULL)
			printf("(nil)");
		else
		printf("%s", p);
		if (i != n - 1 && separator)
		printf("%s", separator);
		i++;
	}
	va_end(k);
	printf("\n");
}
