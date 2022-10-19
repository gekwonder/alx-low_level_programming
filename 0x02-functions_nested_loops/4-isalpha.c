#include "main.h"

/**
 * _isalpha - checks if the letter is alphabet
 * @c: hold character
 *Return: 1 if c is alphabet else, always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
