#include "main.h"
/**
*main - prints all arguments it receives
*@argc: number of command line arguments
*@argv: size of arrays in argc
*
*Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argc = %d\n", argc);
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
