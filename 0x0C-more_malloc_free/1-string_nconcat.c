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

	unsigned int num1, num2, l, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (num1 = 0; s1[num1] != '\0'; num1++)
		;

	for (num2 = 0; s2[num2] != '\0'; num2++)
		;

	if (n > num2)
		n = num2;

	l = num1 + n;

	s = malloc(l + 1);

	if (s == NULL)
		return (NULL);

	for (z = 0; z < l; z++)
		if (i < num1)
			s[z] = s1[z];
		else
			s[z] = s2[z - num1];

	s[z] = '\0';

	return (s);
}
