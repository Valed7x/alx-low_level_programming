#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * *create_array - creates an array of chars.
 *
 * @size: size of the array.
 *
 * @c: char to initialize the array c.
 *
 * Return: NULL 0
*/


char *create_array(unsigned int size, char c)

{
	char *eb;
	unsigned int z;

	if (size == 0)
		return (0);

	eb = malloc(sizeof(c) * size);

	if (eb == 0)
		return (0);

	for (z = 0; z < size; z++)
		eb[z] = c;

	return (eb);
}
