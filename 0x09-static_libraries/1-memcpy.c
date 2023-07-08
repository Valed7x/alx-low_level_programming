#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		dest[z] = src[z];
		z++;
	}

	return (dest);
}
