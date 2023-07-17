#include <stdio.h>
#include "dog.h"


/**
 * print_dog - prints a struct dog.
 *
 * @d: address of the variables.
*/


void print_dog(struct dog *d)

{
	if (d == 0)
		return;

	if (d->name == 0)
		d->name = "(ni)";
	if (d->owner == 0)
		d->owner = "(ni)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
