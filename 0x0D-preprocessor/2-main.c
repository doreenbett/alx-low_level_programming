#include <stdio.h>
/**
*main - prints the name of the file it was compiled from
*@argc: contains the number of aruments passed in argv
*@argv: size of argc
*Return: 0
*/
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
