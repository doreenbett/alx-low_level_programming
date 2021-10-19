#include "main.h"
/**
*check_root - returns the natural square root
*@num: the value to get square root
*@r: the integer to check and square
*Return: root of number
*/
int check_root(int r, int num)
{

	if ((r * r) == num)
		return (r);
	if (r == num / 2)
		return (-1);

	return (check_root(num, r + 1));
}
/**
*_sqrt_recursion - returns natural square root of a number
*@n: the value to get sqrt
*Return: returns natural sqrt of a number
*/
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (check_root(n, r));
}

