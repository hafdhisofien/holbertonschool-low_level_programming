#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: key of hash_node_t (can not be an empty string)
 * @value: value of hash_node_t (must be duplicated /can be an empty string)
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i = 0;
hash_node_t *head = NULL;
hash_node_t *new = NULL;
char *value_dup = strdup(value), *key_dup = strdup(key);

if (ht == NULL || key == NULL || ht->array == NULL || value == NULL)
return (0);
if (strcmp(key, "") == 0)
return (0);
i = key_i((unsigned char *)key, ht->size);
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = key_dup;
new->value = value_dup;
new->next = NULL;
head = ht->array[i];
if (head)
{
new->next = head;
while (head != NULL)
{
if (strcmp(head->key, key_dup) == 0)
{
free(head->value);
head->value = value_dup;
free(new->key);
free(new);
return (1);
}
head = head->next;
}
}
head = new;
ht->array[i] = head;
return (1);
}
