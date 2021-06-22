#include "search_algos.h"

/**
  * interpolation_search - search
  * @array: arr
  * @size: size
  * @value: val
  * Return: always
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t k = 0, l = 0, h = size - 1;

	if (array)
	{
		while ((value >= array[l]))
		{
			k = l + (((double)(h - l) /
						(array[h] - array[l])) * (value - array[l]));

			if (k > size)
			{
				printf("Value checked array[%lu] is out of range\n", k);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", k, array[k]);

			if (array[k] < value)
				l = k + 1;
			else if (array[k] > value)
				h = k - 1;
			else
				return (k);
		}
	}

	return (-1);
}
