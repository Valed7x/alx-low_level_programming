#include "main.h"


/**
 * set_bit - program sets the value a bit to 1.
 *
 * @n: unsigned long int.
 *
 * @index: index of the bit.
 *
 * Return: 1 if it worked || -1 if it didn't.
 */


int set_bit(unsigned long int *n, unsigned int index)

{
	if (index >= sizeof(unsigned int) * 8)

	{

		return (-1);

	}

	*n |= 1 << index;

	return (1);
}
