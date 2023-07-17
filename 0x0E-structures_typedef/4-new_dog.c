#include <stdio.h>
#include "dog.h"


/**
 * new_dog - creates a new variable of type dog_t.
 *
 * @name: name value.
 *
 * @age: age value.
 *
 * @owner: owner name.
 *
 * Return: NULL 0.
*/


dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *p_dog;
	int z, xname, xowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == 0 || !(name) || !(owner))
	{
		free(p_dog);
		return (0);
	}

	for (xname = NULL; name[xname]; xname++)
		;

	for (xowner = NULL; owner[xowner]; xowner++)
		;

	p_dog->name = malloc(xname + 1);
	p_dog->owner = malloc(xowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (0);
		}

	for (z = 0; z < xname; z++)
		p_dog->name[z] = name[z];
	p_dog->name[z] = '\0';

	p_dog->age = age;

	for (z = 0; z < xowner; z++)
		p_dog->owner[z] = owner[z];
	p_dog->owner[z] = '\0';

	return (p_dog);
}
