#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a function given as a parameter.
 *
 * @array: input integer array.
 *
 * @size: size of the array.
 *
 * @action: the function address.
*/


void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int z;

	if (array && action)

		for (z = 0; z < size; z++)

			action(array[z]);

}
