#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * returns: dict of the hashed table in format.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0, flag = 0;
hash_node_t  *tmp = NULL;

if (!ht)
return;
printf("{");
while (i < ht->size)
{
tmp = ht->array[i];
while (tmp != NULL)
{
if (flag == 0)
{
printf("'%s': '%s'", tmp->key, tmp->value);
flag = 1;
}
else
printf(", '%s': '%s'", tmp->key, tmp->value);
tmp = tmp->next;
}
i++;
}
printf("}\n");
}
