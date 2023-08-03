#include "main.h"


/**
 * clear_bit - a function that clears bit.
 *
 * @n: integer.
 *
 * @index: the index of the bit.
 *
 * Return: -1 if fails || 1 if succeded.
 */


int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned int lok;

	if (index > 63)

		return (-1);

	lok = 1 << index;

	if (*n & lok)

		*n ^= lok;

	return (1);
}
