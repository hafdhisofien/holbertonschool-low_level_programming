#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer
 *
 */

void free_listint(listint_t *head)
{
listint_t *node = NULL;
if (head == NULL)
return;
while (head)
{
node = head->next;
free(head);
head = node;
}
}
