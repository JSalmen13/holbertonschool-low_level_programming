#include "search_algos.h"

/**
 * jump_search - search
  * @array: arr
  * @size: size
  * @value: val
  * Return: always
 */

int jump_search(int *array, size_t size, int value)
{
	size_t deb = 0, jump, last = 0;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	while (last < size && array[last] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", last, array[last]);
		last += jump;
	}

	deb = last - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", deb, last);

	last = last >= size ? size - 1 : last;

	while  (deb <= last)
	{
		printf("Value checked array[%lu] = [%d]\n", deb, array[deb]);
		if (array[deb] == value)
			return ((int)deb);
		deb++;
	}

	return (-1);
}
