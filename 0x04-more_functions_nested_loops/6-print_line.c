#include "main.h"
/**
*print_line - draws a new line
*
*@n: The number of times te character _ should be printed
*/
void print_line(int n)
{
	int line

	if (n > 0)
{
	for (line = 0; line < n; line++)
	_putchar('_');
}
	_putchar('\n');
}
