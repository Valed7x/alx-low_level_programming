#include "main.h"
#include <stdio.h>


/**
 * _strpbrk - function that searches a string.
 *
 * @s:first occurrence in the string.
 *
 * @accept: matches one of the bytes.
 *
 * Return: NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int z;
		while (*s)
		{
			for (z = 0; accept[z]; z++)
			{
				if (*s == accept[z])
					return (s);
			}
			s++;
		}
	return (NULL);
}
