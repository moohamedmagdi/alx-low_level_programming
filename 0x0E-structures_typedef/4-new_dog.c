#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create type dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: doggy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, x;
	dog_t *doggy;

	nlen = olen = 0;
	while (name[nlen++])
	;
	while (owner[olen++])
	;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nlen * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (x = 0; x < nlen; x++)
		doggy->name[x] = name[x];

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (x = 0; x < olen; x++)
		doggy->owner[x] = owner[x];
	return (doggy);
}
