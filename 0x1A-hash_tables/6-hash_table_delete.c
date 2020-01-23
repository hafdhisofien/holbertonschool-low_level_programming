#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t **array = NULL;
unsigned long int size = 0, i = 0;
hash_node_t *head = NULL, *tmp = NULL;

if (ht != NULL)
{
size = ht->size;
array = ht->array;
while (i < size)
{
head = array[i];
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
i++;
}
free(ht->array);
free(ht);
}
}
