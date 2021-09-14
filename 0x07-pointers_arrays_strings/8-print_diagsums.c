#include "main.h"
/**
*print_diagsums - prints the sum of two diagonals of a square
*	matrix of integers
*@a: pointer to matrix
*@size: the size
*
*Return: 0
*/
void print_diagsums(int *a, int size)
{
	int i = 0;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
