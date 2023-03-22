#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: array size
 * @action: pointer to function needed
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if ((array == NULL) || (size == 0)|| (action == NULL))
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
