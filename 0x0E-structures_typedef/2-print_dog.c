#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - main func
 * @d: dog
 * Description: prints dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL || (*d).age == NULL || (*d).owner == NULL)
		printf("nil");
	printf("Name: %s\n", *d.name);
	printf("Age: %f\n", *d.age);
	printf("Owner: %s\n", *d.owner);
}
