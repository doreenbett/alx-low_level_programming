#include "main.h"
/**
*main - prints the added positive numbers
*@argc: number of arguments
*@argv: size of argc
*
*Return: 0  oterwise if number contains non digit symbol, 1
*/
int main(int argc, char **argv)
{
	int i;
	int digit;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
