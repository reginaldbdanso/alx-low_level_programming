#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer value expected
 *
 * Return: -n%10 or n%10
 */

int print_last_digit(int n)
{

	int lnum;

	lnum = n % 10;

	if (n < 0)
		{
		_putchar('0' + -lnum);
		/*_putchar('0' + -lnum);*/
		return (-lnum);
		}
	else if (n > 0)
		{
		_putchar('0' + lnum);
		return (lnum);
		}
	else
		{
		_putchar('0');
		return (0);
		}
}
