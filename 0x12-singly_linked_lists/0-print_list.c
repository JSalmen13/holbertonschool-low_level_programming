#include "lists.h"
/**
 * print_list - prints elements and the lists andf their numbers
 * @h: structure
 * Return: nbr of nodes
 */
size_t print_list(const list_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		k++;
	}
	return (k);
}
