#include <stdio.h>
/**
 * _isalpha - test if alphabet or not.
 *@c: the character to test
 * Return: 1 if variable is a lowercase character and 0 if not
 */
int _isalpha(char c)
{
char str;
int ret = 0;
for (str = 'a'; str <= 'z'; str++)
{
if (c == str)
{
ret = 1;
}
}
for (str = 'A'; str <= 'Z'; str++)
{
if (c == str)
{
ret = 1;
}
}
return (ret);
}
