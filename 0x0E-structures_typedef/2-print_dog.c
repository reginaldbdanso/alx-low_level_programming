#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: first parameter
 * Return:
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(98);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	  printf("Name: %s\n", d->name);
	  printf("Age: %f\n", d->age);
	  printf("Owner: %s\n", d->owner);

}
