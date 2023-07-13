#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len0 = 0, len1 = 0;

	while (s1 && s1[len0])
		len0++;
	while (s2 && s2[len1])
		len1++;

	if (n < len1)
		s = malloc(sizeof(char) * (len0 + n + 1));
	else
		s = malloc(sizeof(char) * (len0 + len1 + 1));

	if (!s)
		return (0);

	while (i < len0)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len1 && i < (len0 + n))
		s[i++] = s2[j++];

	while (n >= len1 && i < (len0 + len1))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
