#include "main.h"


/**
 * get_bit - returns the value of a bit.
 *
 * @n: unsigned long int input.
 *
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */


int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int mask = 1 << index;

	if (index > (sizeof(unsigned int) * 8))

		return (-1);

	if (n & mask)

		return (1);

	return (0);
}
