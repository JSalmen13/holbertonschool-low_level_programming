#include "hash_tables.h"
/**
* key_index - create table
* @key: key
* @size: hashtabmle size
* Return: pointer
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
