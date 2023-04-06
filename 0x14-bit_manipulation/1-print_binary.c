#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: nunber to be converted
 * Return: binary representation of the number.
 */

void print_binary(unsigned long int n)
{
	/*If num is greater than 1, continue the recursion*/
	if (n > 1)
		print_binary(n / 2);
	/*Print the least significant bit of num in binary form */
	_putchar(n % 2 + '0');
}
