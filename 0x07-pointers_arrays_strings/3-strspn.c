#include "main.h"

/**
 * _strspn - a function that gets the length.
 *
 * @s: the initial segment of.
 *
 * @accept: which consist only of bytes from.
 *
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, z;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (z = 0; accept[z] != s[a]; z++)
		{
			if (accept[z] == '\0')
				return (a);
		}
	}
	return (a)
}
