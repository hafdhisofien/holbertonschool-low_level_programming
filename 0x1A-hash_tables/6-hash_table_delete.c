#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *head = NULL, *tmp = NULL;

if (ht == NULL)
return;
while (i < ht->size)
{
tmp = ht->array[i];
while (head)
{
head = tmp;
head = head->next;
if (head->key != NULL)
free(head->key);
if (head->value != NULL)
free(head->value);
free(head);
}
free(ht->array[i]);
i++;
}
free(ht->array);
free(ht);
}
