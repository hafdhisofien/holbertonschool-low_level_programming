#include "holberton.h"
/**
 * is_palindrome  - check the code for Holberton School students.
 *@s: string
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
int i = _lent(s);
int k = 0;
return (pal(s, i - 1, k));
}

/**
 * _lent - function mesuring the lenght of the string
 *@s: string
 * Return: int
 */

int _lent(char *s)
{
if (*s)
{
s++;
return (1 + _lent(s));
}
return (0);
}
/**
 *pal - comparing strings the original and the reversed
 *@i: int
 *@k: int
 *@str: reversed string
 *Return: int
 */

int pal(char *str, int i, int k)
{
if (k > i)
return (1);
if (str[i] == str[k])
return (pal(str, i - 1, k + 1));
return (0);
}
