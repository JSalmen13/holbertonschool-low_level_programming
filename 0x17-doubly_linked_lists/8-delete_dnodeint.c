#include "lists.h"
/**
* delete_dnodeint_at_index - print list
* @head: doubly list print
* @index: idx
* Return: nulbers of elements
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int j = 0;
	dlistint_t *Node, *del;

	if (*head == '\0')
		return (-1);

	Node = *head;

	if (index == 0)
	{
		*head = Node->next;
		free(Node);
		return (1);
	}

	while (j != index - 1)
	{
		Node = Node->next;
		if (Node == '\0')
			return (-1);
		j++;
	}
	del = Node->next;
	Node->next = del->next;
	Node->prev = del->prev->prev;
	free(del);
	return (1);
}
