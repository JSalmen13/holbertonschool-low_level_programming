#include "lists.h"
/**
 * free_listint - free all allocated lists
 * @head: element
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *node = NULL;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
