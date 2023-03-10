#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - Entry point
 * Description: Multiplies two numbers.
 * @argc: - argument count
 * @argv: - array of strings
 *Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int counter;

	counter = 0;
	if (argc < 2 || argc > 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[counter + 1]) * atoi(argv[counter + 2]));

	return (0);
}
