#include <stdlib.h>
#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: string input
 * @f: pointer to a function
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if ((name == NULL) || (f == NULL))
		return (NULL);
	ptr = f;
	ptr(name);
}
