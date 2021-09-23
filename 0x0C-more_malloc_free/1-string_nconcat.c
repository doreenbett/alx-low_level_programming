#include "main.h"
/**
*strin_nconcat - the function that concatenates two strings
*@s1: a pointer
*@s2: a second pointer
*@n: number of bytes
*
*Return:  pointer to newly allocated space
*/
char *string_nconcat(char *s1, char s2, unsigned int n);
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + k;
	str = malloc(sizeof(char) * l + 1);
	if (str == Null)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[i];
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
