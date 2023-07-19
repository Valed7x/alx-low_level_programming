#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - checks if a number is existed array.
 *
 * @array: the array of ints.
 *
 * @size: size of the array.
 *
 *@cmp: pointer to the comparing function.
 *
 * Return: f no element matches, return -1
 * If size <= 0, return -1
*/


int int_index(int *array, int size, int (*cmp)(int))

{
	int z;

	if (array && cmp)

	{
		if (size <= 0)

			return (-1);

		for (z = 0; z < size; z++)

			if (cmp(array[z]))

				return (z);
	}

	return (-1);
}
