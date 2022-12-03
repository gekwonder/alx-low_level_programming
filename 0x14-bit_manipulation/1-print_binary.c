#include "main.h"

/**
 * print_binary - to print the binary of an unsigned number
 * @n: take a long variable
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
