#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of strings
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, bytes;
	char *main_code;

	main_code = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", main_code[i]);
		if (i == bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
