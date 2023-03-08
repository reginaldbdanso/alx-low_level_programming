#include "main.h"

/**
 * is_prime_number_helper - helps the is_prime_number function
 * @n: number to evaluate
 * @numx: number
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number_helper(int n, int numx)
{
	if (numx == 1)
		return (1);
	if (n % numx == 0 && numx > 0)
		return (0);
	return (is_prime_number_helper(n, numx - 1));
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number,\
 otherwise return 0.
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_helper(n, n - 1));
}


