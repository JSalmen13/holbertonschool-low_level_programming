#include "lists.h"
/**
* dlistint_len - print list
* @h: doubly list print
* Return: nulbers of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;
while (h)
{
h = h->next;
n++;
}
return (n);
}
