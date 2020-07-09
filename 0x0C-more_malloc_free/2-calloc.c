#include "holberton.h"
/**
 * _calloc - malloc for array
 * @nmemb: number of elements  
 * @size: size of element
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (n =0; n < (nmemb * size); n++)
		arr[n] = 0;
	return (arr);
}
