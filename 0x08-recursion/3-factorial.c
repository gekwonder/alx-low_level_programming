#include "main.h"
#include <stdio.h>

/**
 *factorial - returns the factorial
 *@n: integer
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
