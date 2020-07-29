#include "lists.h"
/**
 * add_nodeint_end - add node to the end of the list
 * @head: element
 * @n: const ints
 * Return: nl or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nl;
	listint_t **temp;

	temp = head;
	nl = malloc(sizeof(listint_t));
	if (nl == NULL)
		return (NULL);
	while (*temp)
		temp = &(*temp)->next;
	nl->n = n;
	nl->next = *temp;
	*temp = nl;
	return (nl);
}
