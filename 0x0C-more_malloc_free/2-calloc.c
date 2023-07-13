#include "main.h"
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array.
 *
 * @nmemb: number of elements.
 *
 * @size: size of bytes.
 *
 * Return: 0
*/


void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *a;
	unsigned int z;

	if (nmemb == 0 || size == 0)
		return (0);

	a = malloc(nmemb * size);

	if (a == 0)
		return (0);

	for (z = 0; z < (nmemb * size); z++)
		a[z] = 0;

	return (a);
}
