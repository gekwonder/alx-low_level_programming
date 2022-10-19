#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets like 10x
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int en;
	char sa;

	for (en = 0; en < 10; en++)
	{
		for (sa = 'a'; sa <= 'z'; sa++)
			_putchar(sa);

		_putchar('\n');
	}
}
