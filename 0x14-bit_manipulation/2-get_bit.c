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

char *print_binary(unsigned int num)
{
	int counter = 0;
	char *binnum;

	/*If num is greater than 1, continue the recursion*/
	if (num > 1)
		counter += print_binary(num / 2);
	/*Print the least significant bit of num in binary form */
	*(binnum++) = (num % 2 + '0');
	counter++;
	return (binnum);
}

int print_binary(unsigned int num)
{
	int counter = 0;
	char none;

	/*If num is greater than 1, continue the recursion*/
	if (num > 1)
		counter += print_binary(num / 2);
	/*Print the least significant bit of num in binary form */
	none = (num % 2 + '0');
	(void)nonee;
	counter++;
	return (counter);
}

