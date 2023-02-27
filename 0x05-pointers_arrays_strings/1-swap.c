#include "main.h"


/**
 * swap_int - swaps the values of two integers.
 * @a: first value
 * @b: second value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
int d;

c = *a;
d = *b;

*a = d;
*b = c;


}
