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
    size_t i;

    if (array == NULL)
        return (-1);

    /* loop through array */
    for (i = 0; i < size; i++)
    {
        /* print the current element */
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        /* check if current element is value */
        if (array[i] == value)
            return (i);
    }

    /* value not present in array */
    return (-1);
}
