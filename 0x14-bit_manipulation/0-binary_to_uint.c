#include "main.h"


/**
 * binary_to_uint - program converts a binary numbers.
 *
 * @b: binary.
 *
 * Return: number
 */


unsigned int binary_to_uint(const char *b)

{
	unsigned int lok;

	int lis, bin;

	if (!b)
		return (0);

	lok = 0;

	for (lis = 0; b[lis] != '\0'; lis++)
		;

	for (lis--, bin = 1; lis >= 0; lis--, bin *= 2)
	{
		if (b[lis] != '0' && b[lis] != '1')
		{
			return (0);
		}

		if (b[lis] & 1)
		{
			lok += bin;
		}
	}

	return (lok);
}
