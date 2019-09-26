#include "holberton.h"
/**
* _isupper - check the code for Holberton School students.
* @c: letter to check
* Return: 1 if c is uppercase.Returns 0 otherwise
**/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
