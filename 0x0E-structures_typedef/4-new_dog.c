#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new variable of type dog_t.
 *
 * @name: name of the dog.
 *
 * @age: age of the dog.
 *
 * @owner: owner of the dog.
 *
 * Return: NULL 0
*/


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int z, lname, lowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (z = 0; z < lname; z++)
		p_dog->name[z] = name[z];
	p_dog->name[z] = '\0';

	p_dog->age = age;

	for (z = 0; z < lowner; z++)
		p_dog->owner[z] = owner[z];
	p_dog->owner[z] = '\0';

	return (p_dog);
}
