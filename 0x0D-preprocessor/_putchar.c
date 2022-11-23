#include <unstd.h>

/**
 * _putchar - wirte a char out
 * @c: the character
 * Return: success is 1
 */
int _putcahr(char c)
{
	return (write(1, &c, 1));
}
