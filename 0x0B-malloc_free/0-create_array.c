#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *create_array - creates an array of chars.
 *
 * @size: size of the array.
 *
 * @c: char to initialize the array c
 *
 * Return: 0
*/


char *create_array(unsigned int size, char c)

{
	char *a;
	unsigned int b = 0;

	if (size == 0)
		return (0);

	a = (char *) malloc(sizeof(char) * size);

	if (a == 0)
		return (0);

	while (b < size)
	{
		*(a + b) = c;
		b++;
	}

	*(a + b) = '\0';

	return (a);
}
