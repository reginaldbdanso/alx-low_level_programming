#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left_side, right_side, idx;

	if (array == NULL)
		return (-1);

	left_side = 0;
	right_side = size - 1;

	while (left_side <= right_side)
	{
		/* print current array */
		printf("Searching in array: ");
		for (idx = left_side; idx < right_side; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		/* find middle index */
		middle = (left_side + right_side) / 2;

		/* check if middle element is value */
		if (array[middle] == value)
			return (middle);

		/* check if value is in left or right half */
		else if (array[middle] < value)
			left_side = middle + 1;
		else
			right_side = middle - 1;
	}

	/* value not present in array */
	return (-1);
}
