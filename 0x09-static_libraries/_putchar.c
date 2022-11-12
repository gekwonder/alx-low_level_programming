#include <unistd.h>

/**
 * _putchar - wirets the character 'c'
 * @c: the char
 * Return: 1 on succes
 * (-1) on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
