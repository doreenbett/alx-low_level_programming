#include "function_pointers.h"
/**
*print_name - prints a name
*@name: pointer to a character name
*@f: function name which is a pointer to a function
*
*/
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))

		return;
	f(name);
}
