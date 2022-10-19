#include "main.h"

/**
 * print_last_digit - displays the last digit
 * @d: hold the character to print
 * Return: value of the last digit.
 */
int print_last_digit(int d)
{
	int ds = d % 10;

	if (ds < 0)
		ds *= -1;

	_putchar(ds + '0');

	return (ds);
}
