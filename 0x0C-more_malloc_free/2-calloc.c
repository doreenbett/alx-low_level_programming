#include "main.h"
/**
*_calloc - allocates memory for an array
*@nmemb: number of memers
*@size: size
*
*Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (i < i)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
