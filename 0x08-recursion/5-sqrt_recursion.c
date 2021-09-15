#include "main.h"
/**
*_sqrt_recursion - returns thenatural square root
*@n: the value to get square root
*
*Return: natural square root of number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (_sqrt_recursion(n + 1));
}