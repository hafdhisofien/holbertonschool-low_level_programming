#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *new = NULL;

new = malloc(sizeof(hash_table_t));
if (new == NULL)
return (NULL);
new->array = malloc(sizeof(hash_node_t *) * size);
if (new->array == NULL)
{
free(new);
new = NULL;
return (NULL);
}
while (i < size)
{
new->array[i] = NULL;
i++;
}
new->size = size;
return (new);
}
