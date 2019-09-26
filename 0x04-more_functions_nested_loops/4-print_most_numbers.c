#include "holberton.h"
/**
 * print_most_numbers - printing 0 -9 exluding 2 and 4
 *
 * Return: none;
 */
void print_most_numbers(void)
{
int count;
for (count = 0; count <= 9; count++)
{
if (count != 2 && count != 4)
_putchar(count + '0');
}
_putchar('\n');
}
