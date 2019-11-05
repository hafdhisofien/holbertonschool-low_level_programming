#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: pointer to pointer
 */

void free_listint2(listint_t **head)
{
listint_t *node = NULL;
if (head == NULL)
return;
while (*head)
{
node = (*head)->next;
free(*head);
*head = node;
}
}
