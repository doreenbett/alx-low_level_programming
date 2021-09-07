#include "main.h"
/**
* print_rev -prints a string in reverse
*
*@s: the character that points the string
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{

	i++;

	}
	while (i - 1 >= 0)
	{

	_putchar(s[i - 1]);
	i--;

	}

_putchar('\n');

}
