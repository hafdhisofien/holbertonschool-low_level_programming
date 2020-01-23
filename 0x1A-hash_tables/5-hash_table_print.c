#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: the hashed table
 * Return: dict of the hashed table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *tmp = NULL;
if (ht == NULL)
return;

printf("{");
while (i < ht->size)
{
tmp = ht->array[i];
while (tmp)
{
printf("'%s' : '%s'", tmp->key, tmp->value);
if (ht->array[i + 1] == NULL)
break;
printf(", ");
tmp = tmp->next;
}
i++;
}
printf("}\n");
}
