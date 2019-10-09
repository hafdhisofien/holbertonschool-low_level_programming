#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 *@s: is a string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
