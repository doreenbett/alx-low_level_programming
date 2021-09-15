#include "main.h"
/**
*is_prime_number - returns 1 if input inteers is a prime number
*@n: the number to be checked
*
*Return: 1 if prime number
*	otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 0)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2) == 0)
		return (0);
	if (n / 5)
		return (0);
	if (n == 5)
		return (1);
	if (n < 0)
		return (0);
	return (is_prime_number(n));
}
