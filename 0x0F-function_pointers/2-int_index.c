#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: number of elements in the array.
 * @cmp: pointer to the function to be used to compare values
 * @array: pointer array
 *
 * Return: first element index on Success, otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for(i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
