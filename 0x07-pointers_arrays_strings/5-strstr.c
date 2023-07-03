#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 *
 * @haystack: the longer string.
 *
 * @needle: the first occurrence.
 *
 * Return: NULL
*/


char *_strstr(char *haystack, char *needle)

{
	unsigned int a = 0, z = 0;

	while (haystack[a])
	{
		while (needle[z] && (haystack[a] == needle[0]))
		{
			if (haystack[a + z] == needle[z])
				z++;
			else
				break;
		}
		if (needle[z])
		{
			a++;
			z = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
