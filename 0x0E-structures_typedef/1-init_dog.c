#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: first parameter
 * @name: string
 * @age: number
 * @owner: string
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
