#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and returns the data
 * @head: linked list of type listint_t
 * Return: date stored at head node
 */

int pop_listint(listint_t **head)
{
int nb;
listint_t *pop = *head;
if (head == NULL || *head == NULL)
return (0);
*head = pop->next;
nb = pop->n;
free(pop);
return (nb);
}
