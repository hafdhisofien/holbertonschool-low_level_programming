#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
int l, c;
int **array;
if (width <= 0 || height <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (l = 0; l < height; l++)
{
array[l] = (int *)malloc(sizeof(int) * width);
if (array[l] == NULL)
{
for (c = 0; c < l; c++)
free(array[c]);
free(array);
return (NULL);
}
for (c = 0; c < width; c++)
array[l][c] = 0;
}
return (array);
}
