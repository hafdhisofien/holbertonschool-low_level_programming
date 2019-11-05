#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer
 *
 */

void free_listint(listint_t *head)
{
listint_t *n = NULL;
if (head == NULL)
return;
while (head)
{
n = head->next;
f(head);
head = n;
}
}
