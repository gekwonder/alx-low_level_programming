#include "main.h"

/**
 * _isupper - functin to check upper case character
 * @c: input char
 * Return: 1 for upercase, 0 for otherwise
 */
int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
