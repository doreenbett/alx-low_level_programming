#include "main.h"
/**
* puts2 - prints everycharacter of a string,starting with first
* @str: pointer integer
*/
void puts2(char *str)
{
	int i = 0;
	int l = 0;


	while (str[i++] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
