#include "main.h"

/**
 * _strncat - concatnating two strings
 * @dest: an input string
 * @src: another input string
 * @n: input integer
 * Return: pointing to the resulting location
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (dest);
}
