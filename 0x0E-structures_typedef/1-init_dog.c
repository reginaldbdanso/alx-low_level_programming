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
	struct dog *ptr;
	ptr = d;
	ptr = malloc(sizeof(struct dog));
        if (ptr == NULL)
                exit (98);
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
