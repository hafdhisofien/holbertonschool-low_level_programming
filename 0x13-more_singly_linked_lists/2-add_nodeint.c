#include "lists.h"

/**
 * add_nodeint - function that add a new node at the beginning of a list
 * @head: pointer to pointer
 * @n: input integer
 * Return:  return address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *e;
if (e == NULL)
return (NULL);
e = malloc(sizeof(listint_t));
if (e == NULL)
return (NULL);
else
{
e->n = n;
e->next = *head;
*head = e;
}
return (e);
}
