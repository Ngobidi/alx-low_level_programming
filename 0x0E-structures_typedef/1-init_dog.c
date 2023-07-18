#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - to initializes the variable of a type struct dog
 * @d: pointer to struct dog to be initialized
 * @name: initializing name
 * @age: initializing age
 * @owner: initializing owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
