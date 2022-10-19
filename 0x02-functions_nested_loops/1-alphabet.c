#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char sa;

	for (sa = 'a'; sa <= 'z'; sa++)
		_putchar(sa);

	_putchar('\n');
}
