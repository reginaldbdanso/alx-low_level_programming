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
	unsigned long int wan = 1;

	/*Check if the index is out of bounds*/
	if (index >= sized)
		return (-1);

	/*Left shift 1 in binary form index times*/
	/*Perform a bitwise OR with n to set the bit at index*/
	*n = (*n | (wan << index));

	return (1);
}
