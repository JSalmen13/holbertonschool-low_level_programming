#include "lists.h"
/**
* print_dlistint - print list
* @h: doubly list print
* Return: nulbers of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
n++;
}
return (n);
}
