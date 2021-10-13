#include "main.h"
/**
*string_nconcat - the function that concatenates two strings
*@s1: a pointer
*@s2: a second pointer
*@n: number of bytes
*
*Return:  pointer to newly allocated space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n;
	unsigned int i;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
