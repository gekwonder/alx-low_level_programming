#include "main.h"

/**
 * print_last_digit = displays the last digit
 * @d: hold the character to print
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	int ds = n % 10;

	if (ds < 0)
		ds *= -1;

	_putchar(ds + '0');

	return (0);
}
