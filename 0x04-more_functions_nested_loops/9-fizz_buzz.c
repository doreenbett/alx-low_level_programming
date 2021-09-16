#include <stdio.h>
/**
*main - prints the numbbers 1 to 100, fizz by 3, buzz by 5
*
*Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)

		printf("FizzBuzz");

		else if ((i % 5) == 0)

		printf("Buzz");
		else if ((i % 3) == 0)

		printf("Fizz");

		else

		printf("%d", i);

		putchar(' ');
	}
	putchar('\n');
	return (0);
}
