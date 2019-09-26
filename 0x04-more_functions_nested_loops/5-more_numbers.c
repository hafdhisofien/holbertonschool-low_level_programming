#include "holberton.h"
/**
 * more_numbers - print numbrs 0 to 14 0 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, count;
for (i = 0; i < 10; i++)
{
for (count = 0; count < 15; count++)
{
if (count > 9)
_putchar((count / 10) + '0');
_putchar((count % 10) + '0');
}
_putchar('\n');
}
}
