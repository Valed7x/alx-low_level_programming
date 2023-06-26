#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse the string
 *
 * @s: the variable of string
 *
 * Return: void 0
*/

void rev_string(char *s)

{
	int a = 0, e = 0;
	char temp;

	while (s[e++])
	{
		a++;
		for (e = a - 1; e >= a / 2; e--)
		{
			temp = s[e];
			s[e] = s[a - e - 1];
			s[a - e - 1] = temp;
		}
	}
}
