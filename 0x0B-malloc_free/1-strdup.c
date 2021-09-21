#include "main.h"
/**
*_strdup - returns a pointer to a new string which is a duplicate of string
*@str: pointer to a string
*Return: a pointer to te duplicated string
*	returns null if insufficient memory was available
*/
char *_strdup(char *str)
{
	int i;
	int n = 0;

	if (str == NULL)
		return (NULL);
	str = malloc(sizeof(char) * n);

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	free(str);
	return (str);
}
