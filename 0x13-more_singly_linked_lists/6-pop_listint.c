#include "lists.h"
/**
 * pop_listint - deletes a head node of list
 * @head: element
 * Return: a
 */
int pop_listint(listint_t **head)
{
	listint_t *node = NULL;
	int i = 0;

	if (*head != NULL)
	{
		node = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(node);
	}
	return (i);
}
