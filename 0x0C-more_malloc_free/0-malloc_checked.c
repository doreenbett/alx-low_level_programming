#include "main.h"
/**
*malloc_checked - function that allocates memory using malloc
*@b: integer value
*Return: pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * 98);
	if (b == 0)
		exit(0);

return (p);
}
