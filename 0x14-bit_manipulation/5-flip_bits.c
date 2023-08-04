#include "main.h"



/**
 * flip_bits - program returns the number of bits.
 *
 * @n: ..
 *
 * @m: ..
 *
 * Return: number of bits.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int lok = n ^ m, lis = 0;

	while (lok > 0)

	{
		lis += (lok & 1);

		lok >>= 1;
	}

	return (lis);
}
