#include "search_algos.h"

/**
 * print_array - print
 * @array: arr
 * @first: first
 * @last: last
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t k;

	printf("Searching in array: ");
	for (k = first; k <= last; k++)
	{
		if (k != first)
			printf(", ");
		printf("%d", array[k]);
	}
	printf("\n");
}

/**
 * ex_binary_search - search
 * @array: arr
 * @size: size
 * @value: val
 * @start: start
 * Return: always
 */

int ex_binary_search(int *array, size_t size, int value, size_t start)
{
	size_t k = 0, ist = start, las = size - 1;

	if (array)
	{
		while (ist <= las)
		{
			print_array(array, ist, las);
			k = (ist + las) / 2; /* Gets the middle value */

			if (value > array[k]) /* Uses the right part of array */
				ist = k + 1;
			else if (value < array[k]) /* Uses the left part of array */
				las = k - 1;
			else
				return (k);
		}
	}

	return (-1);
}

/**
 * exponential_search - search
 * @array: arr
 * @size: size
 * @value: val
 * Return: always
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t k = 1;

	if (array)
	{
		while (k < size && array[k] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", k, array[k]);
			k *= 2;
		}

		k = k > size - 1 ? size : k + 1;
		printf("Value found between indexes [%lu] and [%lu]\n", k / 2, k - 1);
		return (ex_binary_search(array, k, value, k / 2));
	}

	return (-1);
}
