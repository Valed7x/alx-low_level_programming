#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1 - 100 followedby a new line
 * numbers that are multiples of 3 print fizz
 * numbers that are multiples of 5 print Buzz
 * numbers that are multiples of 3 and 5 print fizzBuzz
 * each number and word to be separated by space
 *
 * Return: 0
*/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		} else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		} else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (a == 1)
		{
			printf("%d", a);
		} else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}
