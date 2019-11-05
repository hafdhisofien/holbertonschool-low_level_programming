#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t x = 0;
if (h == NULL)
return (0);
while (h)
{
printf("%d\n", h->n);
x++;
h = h->next;
}
return (x);
}
