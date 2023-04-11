#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index.
 * @n: nunber to be converted
 * @index: position of bit
 * Return: the value of the bit at index
 * index or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sized = (sizeof(unsigned long int) * 8);
	int bit;

	/*Check if the index is out of bounds*/
	if (index >= sized)
		return (-1);

	/*Right shift the bits index times*/
	/*Perform a bitwise AND with 1 to get the bit at index*/
	*n = ((*n >> index) | *n);

	return (1);
}
