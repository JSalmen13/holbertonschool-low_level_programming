#include "lists.h"
/**
 * listint_len - list len
 * @h: list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int  i;

	for (i = 0; h != NULL; i++)
	{
		h = (*h).next;
	}
	return (i);
}
