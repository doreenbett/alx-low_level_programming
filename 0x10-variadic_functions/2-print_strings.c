#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_strings - prints strings
*@separator: string to be printed between strings
*@n: number of strings passed to the function
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if (n == '\0')
		printf("nil");

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
