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
		return (-1);
	if (x == 0)
		return (0);
	if (y <= 1)
		return (1);
	if (x < 0)
		return (-1);
	if (y == 0)
		return (0);

	return (_pow_recursion(x, y));
}
