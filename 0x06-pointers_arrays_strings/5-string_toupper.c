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

	while (*(a + i) != '\0')
	{
		if ((*(a + i) >= 97) && (*(a + i) <= 122))

			*(a + i) = *(a + i) -32;
			i++;
	}
	return (a);
}

