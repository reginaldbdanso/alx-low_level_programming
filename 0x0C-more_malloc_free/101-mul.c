#include <stdio.h>
#include "main.h"
#include <stdlib.h>
char *_multiply(char *num1, char *num2);

/**
 * main - Entry point
 * Description: multiplies two positive numbers
 * @argc: argument count
 * @argv: argument strings
 * Return: 0 Always (succcess)
 */
int main(int argc, char *argv[])
{


	char *mul, *num1, *num2, *num1_str, *num2_str;
	int i, num1_len, num2_len;
	
	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	num1_str = argv[1];
	num2_str = argv[2];

/* Check if num1 and num2 are valid positive integers*/
	for (i = 0; num1_str[i] != '\0'; i++)
	{
		if (!_isdigit(num1_str[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; num2_str[i] != '\0'; i++) {
        if (!_isdigit(num2_str[i])) {
            printf("Error\n");
            exit(98);
        }
    }

/* Allocate memory for num1 and num2*/
num1_len = _strlen(num1_str);
num2_len = _strlen(num2_str);
num1 = (char *) malloc(num1_len + 1);
num2 = (char *) malloc(num2_len + 1);
    if (num1 == NULL || num2 == NULL) {
        printf("Error: Memory allocation failed\n");
        exit(98);
    }

    /* Copy num1_str and num2_str to num1 and num2 */
    _strncpy(num1, num1_str, num1_len + 1);
    _strncpy(num2, num2_str, num2_len + 1);

    mul = _multiply(num1, num2);
    printf("%s\n", mul);

    free(mul);

    return (0);
}

/**
 * _multiply - prints a string, followed by a new line, to stdout.
 * @s: pointer
 * Return:
 */
char *_multiply(char *num1, char *num2)
{
  int len1, len2, len_result, product, pos1, pos2, sum, i, j;
  char *result, *final_result;

len1 = _strlen(num1);
len2 = _strlen(num2);
len_result = len1 + len2;

/* Allocate memory for the result array */
result = calloc(len_result + 1, sizeof(char));

/* Iterate over each digit of the two input strings */
    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
product = (num1[i] - '0') * (num2[j] - '0');
pos1 = i + j;
pos2 = i + j + 1;

/* Add the product to the appropriate position in the result array */
sum = result[pos2] + product;
            result[pos2] = sum % 10;
            result[pos1] += sum / 10;
        }
    }

    /* Remove leading zeros from the result */
i = 0;
    while (result[i] == 0 && i < len_result - 1)
    {
        i++;
    }

    /* Allocate memory for the final result string */
final_result = calloc(len_result - i + 1, sizeof(char));

/* Copy the result array to the final result string */
    for (j = i; j < len_result; j++)
    {
        final_result[j - i] = result[j] + '0';
    }

    /* Free the memory used by the result array */
    free(result);

    return (final_result);
}

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: pointer
 * Return:
 */
void _puts(char *s)
{
	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return;
}

/**
 * _isdigit - checks for a digit
 * @c: expected function parameter
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: result.
 */
int _strlen(char *s)
{
	int result;

	result = 0;
	while (*s != '\0')
	{
		s++;
		result++;
	}
	return (result);
}

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, m;

	i = j = 0;

	for (m = 0; m < n; m++)
	{
		if (m == 98)
		{
			break;
		}
		else
		{
			dest[m] = *src++;
		}
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	if (n - i != 0)
	{
		for (j = i + 1; j < n; j++)
		{
			dest[j] = '\0';
		}
	}
	return (dest);
}
