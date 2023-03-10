#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Prints the number of arguments passed.
 * @argc: - argument count
 * @argv: - array of strings
 *Return: 0 Always (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
