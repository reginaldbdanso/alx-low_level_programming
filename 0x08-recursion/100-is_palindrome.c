#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int result;

	if (*s == '\0')
		return (0);
	result = 1 + _strlen_recursion(s + 1);
	return (result);
}

/**
 * _palindrome_helper - helps is_palindrome function
 * @s: string
 * @i: index
 * @len: string length
 *
 * Return: 1 if string is a palindrome or 0 if not.
 */
int _palindrome_helper(char *s, int i, int len)
{
	int answer0;

	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	answer0 = _palindrome_helper(s, i + 1, len - 1);
	return (answer0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if string is a palindrome or 0 if not.
 */
int is_palindrome(char *s)
{
	int answer;

	if (*s == 0)
		return (1);
	answer = _palindrome_helper(s, 0, _strlen_recursion(s));
	return (answer);
}
