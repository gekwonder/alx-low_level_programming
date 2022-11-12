#include "main.h"

/**
 * _isdigit - check if a digit *0-9*
 * @c: the input char
 * Return: 1 for digit or otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
