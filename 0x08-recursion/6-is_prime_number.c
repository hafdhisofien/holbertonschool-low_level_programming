#include "holberton.h"
/**
 * is_prime_number - function
 * @n: int
 * Return: Always 0
 */
int is_prime_number(int n)
{
return (primeornot(2, n));
}

/**
 * primeornot - primary or not
 * @i: integer
 * @n: Number
 * Return: 0 or 1
 */
int primeornot(int i, int n)
{
if (n <= 1)
return (0);
else if (i >= n)
return (1);
if (n % i != 0 && i != n)
return (primeornot(i + 1, n));
else
return (0);
}
