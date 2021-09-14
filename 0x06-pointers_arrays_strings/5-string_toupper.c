#include "main.h"
/**
*string_toupper - changes lowercase letter to upper
* @a: pointer
*
* Return: pointer of a string
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}

