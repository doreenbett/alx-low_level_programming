#include "main.h"
/**
*_strspn - search a string for a set of bytes
*@s: source string
*@accept: accepted string
*
*Return: number of bytes in the init
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{

				b++;
				break;
		}

		else if (accept[i + 1] == '\0')
			return (b);
	}
	s++;
	}
	return (b);
}
