#include "main.h"

/**
 * _memset - fill memory with constatnnt bytes
 * @s: location to fill
 * @b: char to fill the location
 * @n: number of bytes to fill
 * Return: returns pointer to lacation filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
