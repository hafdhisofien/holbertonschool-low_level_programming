#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - function that print the binary
 * @n: integer
 * Return: always 0
 *
 */
void print_binary(unsigned long int n)
{
int i, b, x;
x = 0;
if (n == 0)
_putchar('0');
for  (i = 63; i >= 0; i--)
{
b = (n >> i);
if (b != 0)
x = 1;
if (x != 0)
{
if (b & 1)
_putchar('1');
else
_putchar('0');
}
}
}
