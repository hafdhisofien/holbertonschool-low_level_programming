#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to pointer
 * @n: integer input
 * Return: return the adress of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = NULL, *last = *head;

new = malloc(sizeof(*new));
if (new)
{
new->n = n;
new->next = NULL;
if (!*head)
*head = new;
else
{
while (last->next)
last = last->next;
last->next = new;
}
}
return (new);
}
