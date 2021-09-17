#include "main.h"
/**
*main - prints the number or arguments passed to it
*@argc: contains size of array
*@argv: contains size of argc
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
		printf("%s\n", argv[i]);

	}
	return (0);
}
