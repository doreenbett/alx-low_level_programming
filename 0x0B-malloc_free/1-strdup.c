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
	int l = 0;
	char *dpc;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		l++;
	}
	dpc = malloc(sizeof(char) * (l + 1));

	if (dpc == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dpc[i] = str[i];

	dpc[l] = '\0';

	return (dpc);
}
