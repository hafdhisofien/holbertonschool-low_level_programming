#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at position index (starting from 0)
 * @head: DLL head address.
 * @index: position of the node to be deleted.
 * Return: if succeeded 1, else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0 && tmp)
{
if (tmp->next)
{
*head = tmp->next;
(*head)->prev = NULL;
}
else
*head = NULL;
free(tmp);
return (1);
}
while (tmp)
{
if (i == index)
{
(tmp->prev)->next = tmp->next;
if (tmp->next)
(tmp->next)->prev = tmp->prev;
free(tmp);
return (1);
}
tmp = tmp->next;
i++;
}
return (-1);
}
