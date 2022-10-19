#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints to screnn per character
 * @c: the character
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
