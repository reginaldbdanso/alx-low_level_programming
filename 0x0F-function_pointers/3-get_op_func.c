#include <stdlib.h>
#include "3-calc.h"


/**
 * get_op_func - pointer to a function
 *
 * @s: operator passed as argument to the program
 * @: number of elements in the array
 * @: pointer to function needed
 * Return: index of the first element
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && !*(s + 1))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
