#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The pointer to convert.
 *
 * Return: the int converted from the string.
*/

int _atoi(char *s)

{
	int a, b, c, num, e, num1;

	a = 0;
	b = 0;
	c = 0;
	num = 0;
	e = 0;
	num1 = 0;

	while (s[num] != '\0')
		num++;

	while (a < num && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num1 = s[a] - '0';
			if (b % 2)
				num1 = -num1;
			c = c * 10 + num1;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}
