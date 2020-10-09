#include "hash_tables.h"
/**
* hash_table_create - create table
* @size: hashtabmle size
* Return: pointer
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	if (size <= 0)
		return (NULL);
	h = malloc(sizeof(hash_table_t));
	if (!h)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (!h->array)
	{
		free(h);
		return (NULL);
	}
	return (h);
}
