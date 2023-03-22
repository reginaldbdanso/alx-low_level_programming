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
	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		printf("Memory allocation failed\n");
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
		printf("Memory allocation failed\n");
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);

}


/**
 * _strcpy - copies the string pointed to by src, including the terminating\
 null byte (\0), to the buffer pointed to by dest.
 * @dest: destination parameter
 * @src: source parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int a;
int b;
a = 0;

while (*(src + a) != '\0')
{
a++;
}
for (b = 0 ; b < a ; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
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
