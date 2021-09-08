#include "main.h"
/**
* puts2 - prints everycharacter of a string,starting with first
* @str: pointer integer
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
		i++;
	while (i >= 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
