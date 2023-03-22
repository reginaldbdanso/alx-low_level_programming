#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Structure to store the details of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
