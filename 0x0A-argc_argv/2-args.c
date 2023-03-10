#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Prints all arguments it receives.
 * @argc: - argument count
 * @argv: - array of strings
 *Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return (0);
}
