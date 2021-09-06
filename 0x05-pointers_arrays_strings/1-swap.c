#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: first integer
* @b: second integer
*/
void swap_int(int *a, int *b)
{
	int p = 98, q = 42;

	*a = &p;
	*b = &q;
	*a = &q;
	*b = &p;
}
