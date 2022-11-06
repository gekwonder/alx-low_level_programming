#include "main.h"

int divider(int num, int div);

/**
 * is_prime_number - function to check prime.
 * @n: input
 * Return: 1 for prime / 0 in otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (divider(n, div));
}

/**
 * divider - check if num is divisible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int divider(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (divider(num, div + 1));
}
