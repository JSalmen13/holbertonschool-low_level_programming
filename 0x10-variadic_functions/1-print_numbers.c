#include "variadic_functions.h"
/**
 * print_numbers - printing numbers with separators
 * @separator: ", "
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list k;
	unsigned int i = 0;

	va_start(k, n);
	if (separator == NULL)
	{
		return;
	}
	while (i < n)
	{
		printf("%d", va_arg(k, int));
		if (i != n - 1)
		printf("%s", separator);
		i++;
	}
	va_end(k);
	printf("\n");
}
