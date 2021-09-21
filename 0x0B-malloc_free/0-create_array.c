#include "main.h"
/**
*create_array - creates array of chars and initializes it with specific char
*@size: represents number of bytes
*@c: character to be initialized
*
*Return: NULL if size is 0
*	otherwise a pointer to array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
