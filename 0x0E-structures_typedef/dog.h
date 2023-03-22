#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog structure
 * @name: Name of dog
 * @age: age of dog
 * @owner: Dog owner
 *
 * Description: Structure to store the details of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
