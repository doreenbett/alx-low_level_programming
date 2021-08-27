#include <stdio.h>
/**
*main - Prints the alphabets except q and e
*
*Return: 0
*/
int main(void)
{
char letter;
for (leter = 'a'; letter <= 'z'; letter++)
if (letter != 'e' && letter != 'q')
putchar(letter);
putchar('\n');
return (0);
}
