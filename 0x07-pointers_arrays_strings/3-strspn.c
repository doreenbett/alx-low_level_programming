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
	unsigned int i, j, a = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				a++;
			}
			j++;
		}
		i++;
	}
	return (a);
}
