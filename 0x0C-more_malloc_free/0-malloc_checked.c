#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * *malloc_checked - allocates memory using malloc.
 *
 * @b: number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory
*/


void *malloc_checked(unsigned int b)

{
	char *z;

	z = malloc(b);
	if (z == 0)
		exit(98);

	return (z);
}
