#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow - calcul puissance
 * @a: enteger
 * @p: integer
 * Return: result to pow to  n number
 */
int _pow(int a, int p)
{
int n, i;
n = 1;
for (i = 0; i < p; i++)
{
n = n *a;
}
return (n);
}

/**
 * binary_to_uint - function that converts a
 * binary number to an int
 * @b: pointer
 * Return: 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal, i, j;
decimal = 0;
i = 0;
if (b == NULL)
return (0);
for (j = 0; b[j] != '\0'; j++)
{
if (((b[j]) != '0') && ((b[j]) != '1') && ((b[j]) != '\0'))
return (0);
}
j = j - 1;
while (b[i] != '\0')
{
if ((b[j - i]) == '1')
{
if (i == 0)
decimal += 1;
else
decimal += _pow(2, i);
}
i++;
}
return (decimal);
}
