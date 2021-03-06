#include "main.h"
/**
*main - prints the minimum number of coins to make change
*@argc: number of command line arguments
*@argv: array containing the program command line arguments
*Return: 1 if arguments passed is not exactly 1
*		otherwise 0
*/
int main(int argc, char **argv)
{
	int cen = 0;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cen = atoi(argv[1]);

	while (cen > 0)
	{
		coin++;
		if ((cen - 25) >= 0)
		{
			cen -= 25;
			continue;
		}
		if ((cen - 10) >= 0)
		{
			cen -= 10;
			continue;
		}
		if ((cen - 5) >= 0)
		{
			cen -= 5;
			continue;
		}
		if ((cen - 2) >= 0)
		{
			cen -= 2;
			continue;
		}
		cen--;
	}
	printf("%d\n", coin);

	return (0);
}
