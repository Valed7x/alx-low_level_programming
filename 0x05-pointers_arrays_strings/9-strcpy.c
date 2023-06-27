#include "main.h"

/**
 *   _strcpy - Copy a string
 *
 *   @dest: copy to
 *
 *   @src: copy from
 *
 *   Return: 0
*/

char *_strcpy(char *dest, char *src)

{
	int num, b;

	num = 0;

	while (src[num] != '\0')
	{
		num++;
	}

	for (b = 0; b < num; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
