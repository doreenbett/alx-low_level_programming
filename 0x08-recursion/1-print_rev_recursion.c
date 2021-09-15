#include "main.h"
/**
*_print_rev_recursion - prints a string in reverse
*
*@s: pointer to a string
*
*/
void _print_rev_recursion(char *s)
{
	int len = 0;
	int i = len - 1;

	if (s[i] != '\0')
	{
		_putchar(*s);
		i--;
		len++;
	}
}

