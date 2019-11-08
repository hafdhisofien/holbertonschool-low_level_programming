#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - function sets the value of bit to 1
 * @n: integer
 * @index: integer
 * Return: return integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
int binary, x;
binary = 0;
x = 0;
if (index > 63)
return (-1);
binary = (n >> index);
x = binary & 1;
if (x)
return (1);
else
return (0);
return (-1);
}
