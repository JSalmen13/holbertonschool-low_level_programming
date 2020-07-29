#include "lists.h"
/**
 * free_listint2 - sets head to NULL
 * @head: element
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = NULL;
	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
