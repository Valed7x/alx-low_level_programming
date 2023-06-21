#include <stdio.h>

/**
 * main -entry point
 * Description: prints the first 98 fibonacci numbers
 * starting with 1 and 2 followed by a new line
 *
 * Return: always 0
*/

int main(void)
{
	unsigned long int a, b, e, b1, b2, e1, e2;

	b = 1;
	e = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", e);
		e = e + b;
		b = e - b;
	}
	b1 = b / 1000000000;
	b2 = b / 1000000000;
	e1 = e / 1000000000;
	e2 = e / 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", e1 + (e2 / 1000000000));
		printf("%lu", e2 % 1000000000);
		e1 = e1 + b1;
		b1 = e1 - b1;
		e2 = e2 + b2;
		b2 = e2 - b2;
	}

	printf("\n");

	return (0);
}
