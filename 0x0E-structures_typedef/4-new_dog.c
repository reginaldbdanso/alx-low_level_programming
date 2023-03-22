#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);

}
