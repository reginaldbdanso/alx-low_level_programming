#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num1;

	num1 = n;

	if (n < 0)
	{
		_putchar('-');
		num1 = -n;
	}

	if (num1 / 10 != 0)
	{
		print_number(num1 / 10);
	}
	_putchar((num1 % 10) + '0');
}
