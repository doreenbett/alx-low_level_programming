#include "main.h"
/**
*main - multiplies two numbers
*@argc: number of arguments
*@argv: size of argc
*
*Return: 0 if the program receives two arguments
*	1 if does not recive two arguments
*/
int main(int argc, char **argv)
{
	int a;
	int b;
	int c;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = (a * b);
	{
		printf("%d\n", c);
	}
	return (0);
}
