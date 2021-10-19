#include "main.h"
/**
*check_root - returns the natural square root
*@num: the value to get square root
*@root: the integer to check and square
*Return: root of number
*/
int check_root(int root, int num)
{

	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (check_root(num, root + 1));
}
/**
*_sqrt_recursion - returns natural square root of a number
*@n: the value to get sqrt
*Return: returns natural sqrt of a number
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (check_root(n, root));
}

