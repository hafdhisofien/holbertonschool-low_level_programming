#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: integer
 * @index: integer
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int s, h;
s = 0;
h = 1;
if (index > 63)
return (-1);
s = *n | (h << index);
*n = s;
return (1);
}
