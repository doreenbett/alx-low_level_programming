#include "main.h"
/**
*_strlen_recursion - returns the length of a string
*@s: pointer to the string
*
*Return: length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (0);
	}
	s++;

	_strlen_recursion(s);
	return (s);
}
