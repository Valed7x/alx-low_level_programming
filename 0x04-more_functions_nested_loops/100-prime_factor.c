#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * find by a new line
 *
 * Return: 0 Success
 */
int main(void)
{
	long int num1;
	long int num2;
	long int num3;

	num1 = 612852475143;
	num2 = -1;

	while (num1 % 2 == 0)
	{
		num2 = 2;
		num1 /= 2;
	}

	for (num3 = 3; num3 <= sqrt(num1); num3 = num3 + 2)
	{
		while (num1 % num3 == 0)
		{
			num2 = num3;
			num1 = num1 / num3;
		}
	}

	if (num1 > 2)
		num2 = num1;

	printf("%ld\n", num2);

	return (0);
}
