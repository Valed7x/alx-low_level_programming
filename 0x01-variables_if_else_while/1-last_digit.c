#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - enety point
 *
 * Description: print the value of n status:
 * greater than, is zero and is not less than 6
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6and not 0\n");
	return (0);
}
