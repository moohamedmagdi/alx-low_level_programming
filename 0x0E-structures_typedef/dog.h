#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: define data
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* other prototypes */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
