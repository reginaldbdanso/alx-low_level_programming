#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root\
  of a number.
 * @n: number
 * Return: integer
 */
int _sqrt_recursion_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion_helper(n, 0, n / 2 + 1));
}

/**
 * _sqrt_recursion_helper - helps by restricting the range\
 for the recursive search
 * @n: number
 * Return: integer
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid, root;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;
	root = mid * mid;

	if (root == n)
		return (mid);
	else if (root < n)
		return (_sqrt_recursion_helper(n, mid + 1, end));
	else
		return (_sqrt_recursion_helper(n, start, mid - 1));
}
