#include "main.h"

/**
 * reverse_array - reverses the content of an array integers.
 * @a: pointer
 * @n: size of array
 *
 * Return: dest
 */

void reverse_array(int *a, int n)
{
	int stored;
	int counter;
	int i;

	counter = 0;
	while (counter < n)
	{
		counter++;
	}

	counter--;
	for (i = 0; i < counter; i++)
	{
		stored = a[i];
		a[i] = a[counter];
		a[counter] = stored;
		counter--;
	}
	return;

}
