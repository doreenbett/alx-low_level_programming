#include "main.h"
/**
* puts_half - prints half of a string
* @str: pointer of an integer
*/
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{

		i++;

	}
	if (i % 2 != 0)
	{

		n = (i - 1) / 2;
	}
	else
	{

		n = i / 2;

	}
	for (n = i - n; n < i; n++)
	{
		_putchar(str[n]);
	}
	-putchar('\n');
}
