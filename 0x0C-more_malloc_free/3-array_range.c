#include <stdlib.h>
#include "main.h"


/**
 * *array_range - creates an array of integers.
 *
 * @min: minimum range of values stored.
 *
 * @max: maximum range of values stored and number of elements.
 *
 * Return: 0
*/

int *array_range(int min, int max)
{
	int *a;
	int z;

	if (min > max)
		return (0);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == 0)
		return (0);

	for (z = 0; min <= max; z++, min++)
		a[z] = min;

	return (a);
}
