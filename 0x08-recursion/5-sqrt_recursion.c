#include "holberton.h"

/**
 *_sqrt_recursion - call function to verifiy squares
 *@n:int
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
return (sqrcheker(0, n));
}
/**
 * sqrcheker - function to determine sqr on n numbers
 *@i:int
 *@n:int
 *Return: sqr
 */
int sqrcheker(int i, int n)
{
if (i * i == n)
return (i);
else if (i < n)
return (sqrcheker(i + 1, n));
else
return (-1);
}
