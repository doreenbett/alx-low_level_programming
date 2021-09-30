#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
*print_numbers - prints numbers followed by new line
*@separator: is the string to be printed
*@n: number of integers passed to the function
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if ((separator == NULL) || (n == 0))
		return;
	for (i = 0; i < n; i++)
	{
		va_arg(ap, int);
	}
	va_end(ap);
}
