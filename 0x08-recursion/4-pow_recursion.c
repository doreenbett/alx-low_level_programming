#include "main.h"
/**
*_pow_recursion - returns value of x raised to power y
*@x: first integer
*@y: second integer
*
*Return: value of x to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)

	return (_pow_recursion(x, y));
}
