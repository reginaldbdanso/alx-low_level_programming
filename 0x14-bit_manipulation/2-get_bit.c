#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: nunber to be converted
 * @index: position of bit
 * Return: the value of the bit at index 
 * index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 1;
	/* unsigned long int p = n; */

	/*If n is greater than 1, continue the recursion*/
	if (n > 1)
	{
		counter += 1;
		get_bit(n >> 1, index);
	}
	/*Print the least significant bit of n in binary form */
	if (counter == index)
	{
		if (n & 1)
		{
			_putchar('1');
			return (1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
	counter -= 1;

	
	return (-1);
}
