#include "main.h"
/**
* _puts - prints a string followed by a newline
* @str: pointer to the string
*/
void _puts(char *str)
{
	*str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	_puts('\n');
}
