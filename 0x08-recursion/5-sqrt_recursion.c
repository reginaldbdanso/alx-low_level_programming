#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root\
  of a number.
 * @n: number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	root = _sqrt_recursion(n / 2);
	if (n == root * root)
		return (root);
	else if (n < root * root)
		return (_sqrt_recursion(n / 2));
	else
		return (_sqrt_recursion(n / 2 + 1));
}
