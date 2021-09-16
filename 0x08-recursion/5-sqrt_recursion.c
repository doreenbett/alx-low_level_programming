

#include "main.h"
/**
*_sqrt_recursion - returns thenatural square root
*@num: the value to get square root
*@r: the integer to check and square
*Return: root of number
*/
int root(int r, int num)
{

	if ((r * r) == num)
		return (1);
	if (r == num / 2)
		return (-1);
	return (root(num, r + 1));
}
/**
*_sqrt_recursion - returns natural square root of a number
*@n: the value to get sqrt
*Return: returns natursl sqrt of a number
*/
int _sqrt_recursion(int n)
{
	int r =0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n <= 1)
		return (1);

	return (root(n, r));
}

