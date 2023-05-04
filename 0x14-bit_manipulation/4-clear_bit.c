#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: nunber to be converted
 * @index: position of bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sized = (sizeof(unsigned long int) * 8);
	unsigned long int wan = 1;

	/*Check if the index is out of bounds*/
	if (index >= sized)
		return (-1);

	/*Left shift 1 in binary form index times*/
	/*Perform a bitwise XOR with n to clear the bit at index*/
	*n = (*n & ~(wan << index));

	return (1);
}

