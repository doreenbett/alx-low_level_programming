#include "main.h"
/**
*print_to_98 - Prints all natural numbers
*
*Return: 0
*/
int print_to_98(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
{
	if ((i % 3) == 0 || (i % 5) == 0)
	sum += i;
}
	_putchar('\n');
return (0);
}
