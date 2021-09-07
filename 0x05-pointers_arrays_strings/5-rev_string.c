#include "main.h"
/**
* rev_string - function that reverses a string
* @s: a pointer to a char
*/
void rev_string(char *s)
{
	int len =, index 0;
	char ch;

	while (s[index++])
		len++;
	
	for (index = len - 1; index >= len / 2; index--)
	{
	ch = s[index];
	s[index] = s[len - index - 1];
	s[len -index - 1] = ch;
}
}
