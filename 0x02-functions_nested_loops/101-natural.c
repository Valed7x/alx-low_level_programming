#include "main.h"
/**
 * main - entry point
 * Description: computes the sum of all
 * the multiples of 3 or 5
 * bellow 1024
 *Return: always 0
*/
int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
