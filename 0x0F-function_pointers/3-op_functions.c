#include "3-calc.h"

/**
 * op_add - Addition operation
 *
 * @a: First Parameter
 * @b: second parameter
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction operation
 *
 * @a: First Parameter
 * @b: second parameter
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication operation
 *
 * @a: First Parameter
 * @b: second parameter
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division operation
 *
 * @a: First Parameter
 * @b: second parameter
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulo operation
 *
 * @a: First Parameter
 * @b: second parameter
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
