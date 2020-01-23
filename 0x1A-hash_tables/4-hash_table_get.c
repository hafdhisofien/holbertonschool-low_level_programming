#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i = 0;
hash_node_t *tmp = NULL;
if (key == NULL)
return (NULL);

if (ht != NULL)
{
i = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[i];
}
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
tmp = tmp->next;
}

return (NULL);
}
