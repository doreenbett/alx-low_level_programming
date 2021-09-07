#include "main.h"
/**
* print_array - prints n elements of an array of integers
* @n: number of elements of array to be printed
* @a: array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
