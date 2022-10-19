#include "main.h"

/**
 * _islower - checks out the lower case character
 * @c: character holder
 * Return: 1 if letter is lowercase, if not Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
