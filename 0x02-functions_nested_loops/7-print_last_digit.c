#include "main.h"
/**
*print_last_digit - Prints the last digit of a number
*
*@n: The assumed last digit
*
*Return: The value of last digit
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_diit < 0)
	last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
