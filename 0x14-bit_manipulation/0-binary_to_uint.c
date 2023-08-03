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
	unsigned int u = 0, a;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		u <<= 1;
		u += b[a] - '0';
	}
	return (u);
}
