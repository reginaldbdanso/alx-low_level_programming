#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,\
 followed by a new line.
 *
 *@n: a natural number
 * Return:
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d", n);
		while (n < 98)
		{
			n++;
			printf(", %d", n);
		}
		printf("\n");
	}

	if (n > 98)
	{
		printf("%d", n);
		while (n > 98)
		{
			n--;
			printf(", %d", n);
		}
		printf("\n");
	}

}
