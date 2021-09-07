#include "main.h"
/**
* print_rev -prints a string in reverse
*
*@s: the character that points the string
*/
void print_rev(char *s)
{
	int l = 0;

	while ((s + l) != 0)
	l++;

	{
	while (l >= 0)
	l--;
	}
	_putchar(s + l);

}
