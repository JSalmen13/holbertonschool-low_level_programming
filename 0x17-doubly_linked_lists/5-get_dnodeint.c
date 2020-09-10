#include "lists.h"
/**
* free_dlistint - print list
* @head: doubly list print
* Return: nulbers of elements
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int j;

	node = head;
	j = 0;
	while (node != NULL)
	{
		if (j == index)
			return (node);
		node = node->next;
		j++;
	}
	return (NULL);
}