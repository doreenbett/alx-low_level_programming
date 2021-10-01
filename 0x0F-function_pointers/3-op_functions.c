#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*op_add - returns the sum of a and b
*@a: integer value
*@b; integer value
*Return: sum
*/
int op_add(int a, int b);
{
	return (a + b);
}

/**
*op_sub - returns the difference of a and b
*@a: integer value
*@b: integer value
*
*Return: difference
*/
int op_sub(int a, int b);
{
	return (a - b);
}

/**
*op_mul - returns the product of a and b
*@a: integer value
*@b: integer value
*
*Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - returns the result of division
*@a: integer value
*@b: integer value
*
*Return: the result of division
*/
int op_div(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod - returns the remainder of division
*@a: integer value
*@b: integer value
*
*Return: remainder of division
*/
int op_mod(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
