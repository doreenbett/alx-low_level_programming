#include <stdio.h>
/**
*main - prints the name of the file it was compiled from
*@argc: contains the number of aruments passed in argv
*@argv: size of argc
*Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
