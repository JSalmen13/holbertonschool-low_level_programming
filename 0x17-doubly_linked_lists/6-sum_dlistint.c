#include "lists.h"
/**
* free_dlistint - print list
* @head: doubly list print
* Return: nulbers of elements
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *nodesum;

	if (head == NULL)
		return (0);
	nodesum = head;
	sum = 0;
	while (nodesum != NULL)
	{
		sum = sum + nodesum->n;
		nodesum = nodesum->next;
	}
	return (sum);
}