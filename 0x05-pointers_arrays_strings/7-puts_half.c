#include "main.h"
/**
* puts_half - prints half of a string
* @str: pointer of an integer
*/
void puts_half(char *str)
{
	int i = 0;
	int n;
	int l = 0;

	while (str[i++] != '\0')
	{

		l++;

	}
	if (i % 2 != 0)
	{

		n = (i - 1) / 2;
	}
	else
	{

		n = i / 2;

	}
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
