#include <stdio.h>
#include "main.h"


/**
 * main - prints the number of arguments passed.
 *
 * @argc: number of command line.
 *
 * @argv: array that contains the program command line.
 *
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))

{
	printf("%d\n", argc - 1);

	return (0);
}

