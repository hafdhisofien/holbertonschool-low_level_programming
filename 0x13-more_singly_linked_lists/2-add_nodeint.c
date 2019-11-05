#include "lists.h"

/**
 * add_nodeint - function that add a new node at the beginning of a list
 * @head: pointer to pointer
 * @n: input integer
 * Return:  return address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
else
{
new->n = n;
new->next = *head;
*head = new;
}
return (new);
}
