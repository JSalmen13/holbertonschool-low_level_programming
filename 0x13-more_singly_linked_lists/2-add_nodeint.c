#include "lists.h"
/**
 * add_nodeint - add new node to the beggining
 * @head: element
 * @n: const int
 * Return: NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nl;

	nl = malloc(sizeof(listint_t));
	if (nl)
	{
		(*nl).n = n;
		(*nl).next = *head;
		*head = nl;
		return (nl);
	}
	return (NULL);
}
