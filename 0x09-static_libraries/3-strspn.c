#include "main.h"

/**
 * _strspn - a function that gets the length.
 *
 * @s: the initial segment of.
 *
 * @accept: which consist only of bytes from.
 *
 * Return: the number of bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, e, j;

	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[e] == accept[j])
					a++;
			}
		}
		else
			return (a);
	}
		return (a);

}
