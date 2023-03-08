#include "main.h"

/**
 * _sqrt_recursion_helper - helps by restricting the range\
 for the recursive search
 * @n: number
 * @root: number
 * Return: integer
 */
int _sqrt_recursion_helper(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_sqrt_recursion_helper(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root\
  of a number.
 * @n: number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}
