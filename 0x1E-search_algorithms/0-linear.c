#include "search_algos.h"

/**
 * linear_search - linear search of a value
 * @array: Array to search
 * @size: size of the array
 * @value: value seaching for
 *
 * Return: index of value location or -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
  size_t i;

  if (array != NULL)
    {
      for (i = 0; i < size; i++)
	{
	  printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	  if (array[i] == value)
	    return (i);
	}
    }
  return (-1);
}
