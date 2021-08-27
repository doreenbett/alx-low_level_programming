#include <stdio.h>
/**
*main - Prints alphabets in lowercase then upper
*
*Return: 0
*/
int main(void)
{
char letter:
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n);
return (0);
}
