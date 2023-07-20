#include "3-calc.h"


/**
 * op_add - adds two numbers.
 *
 * @z: 1st number.
 *
 * @w: 1st number.
 *
 * Return: sum of z and w
 */


int op_add(int z, int w)
{

	return (z + w);

}


/**
 * op_sub - subctracts two numbers.
 *
 * @z: 1st number.
 *
 * @w: 1st number.
 *
 * Return: sum of z and w
 */


int op_sub(int z, int w)
{

	return (z - w);

}


/**
 * op_mul - multiplies two numbers.
 *
 * @z: 1st number.
 *
 * @w: 1st number.
 *
 * Return: sum of z and w
 */


int op_mul(int z, int w)
{

	return (z * w);

}


/**
 * op_div - divides two numbers.
 *
 * @z: 1st number.
 *
 * @w: 1st number.
 *
 * Return: sum of z and w
 */


int op_div(int z, int w)

{
	if (w == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (z / w);
}


/**
 * op_mod - calculates the module of two numbers.
 *
 * @z: 1st number.
 *
 * @w: 1st number.
 *
 * Return: sum of z and w
 */


int op_mod(int z, int w)
{
	if (w == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (z % w);
}
