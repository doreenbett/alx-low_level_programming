#include "main.h"
/**
*_memset - function that fills n bytes of memory area
*
* @s: pointer to the memory area
* @b: the value
* @n: the number of bytes
*
* Return: a pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + 1) = b;
		i++;
	}

	return (s);
}
