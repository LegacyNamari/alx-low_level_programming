#include "search_algos.h"

/**
 * jump_search -Searches for a value in a sorted array\
 *		using jump sort algorithm.
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search.
 *
 * Return: -1 if array is NULL or value not in array
 *		otherwise - value
 *
 * Description: must use the square root of the size of the array \
 *		as the jump step
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, jmp, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (start = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		start = jmp;
		jmp += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; start < jmp && array[start] < value; start++)
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	return (array[start] == value ? (int)start : -1);
}
