#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
	s[z] = b;
	z++;
	}

	return (s);
}
