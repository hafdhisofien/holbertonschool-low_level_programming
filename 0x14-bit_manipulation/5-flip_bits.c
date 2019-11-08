#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: integer
 * @m:integer
 * Return: return 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, j;
j = 0;
for (i = 0; i < 64; i++)
{
if (((n >> i) & 1) != ((m >> i) & 1))
{
j++;
}
}
return (j);
}
