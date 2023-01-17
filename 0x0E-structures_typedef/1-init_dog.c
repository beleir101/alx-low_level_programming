#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - main func
 * @d: dog
 * @name: dogs name
 * @age: age of dog
 * @owner: owner of dog
 * Description: initializes dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = malloc(sizeof(struct dog));

	if (*d == NULL)
		break;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
