#include "main.h"

/**
 * flip_bits - eturns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to
 * flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR the two numbers */
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		/* count the number of set bits in the XOR result */
		count++;
		/* clear the least significant set bit */
		xor = xor & (xor - 1);

	}
	return (count);
}
