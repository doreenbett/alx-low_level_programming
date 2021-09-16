#include "main.h"
/**
*is_palindrome - returns 1 if a string is a palindrome
*@s: pointer to a string
*
*Return: 1 if its a palindrome and 0 otherwise
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		_putchar('\n');
		return (1);
	if (*s != '\0')
		_putchar(*s);
	s--;
		return (1);
	return (is_palindrome(s - 1));
}
