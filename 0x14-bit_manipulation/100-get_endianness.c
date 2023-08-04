#include "main.h"



/**
 * get_endianness - function that checks.
 *
 * Return: 0 if big endian || 1 if little endian.
 */


int get_endianness(void)

{
	int z = 1;

	if (*(char *)&z)

		return (1);

	return (0);
}
