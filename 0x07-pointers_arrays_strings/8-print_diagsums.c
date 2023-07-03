#include "main.h"
#include <stdio.h>



/**
 * print_diagsums - A function that prints the sum of the two diagonals.
 *
 * @a: The matrix of integers.
 *
 * @size: The size of the matrix.
 *
 * Return: NULL
*/

void print_diagsums(int *a, int size)

{

	int num1, num2, m;

	num1 = 0;
	num2 = 0;

	for (m = 0; m < size; m++)
	{
		num1 = num1 + a[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
		num2 += a[m * size + (size - m - 1)];
	}

	printf("%d, %d\n", num1, num2);
}
