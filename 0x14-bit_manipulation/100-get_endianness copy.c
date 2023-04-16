#include <main.h>

/**
 * get_endianness - writes the character c to stdout
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x;
	char *ptr;

	x = 1;
	ptr = (char*)&x;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
