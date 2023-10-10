#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	/* loop through array */
	for (idx = 0; idx < size; idx++)
	{
		/* print the current element */
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

		/* check if current element is value */
		if (array[idx] == value)
			return (idx);
	}

	/* value not present in array */
	return (-1);
}
