#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change.
 * 
 * @argc: number of command line.
 *
 * @argv: array that contains the program command line.
 *
 * Return: 0
*/

int main(int argc, char *argv[])


{
	int a, b, v;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	v = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= coins[b])
		{
			v++;
			a -= coins[b];
		}
	}

	printf("%d\n", result);
	return (0);
}
