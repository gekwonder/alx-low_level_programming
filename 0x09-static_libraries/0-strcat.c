#include "main.h"

/**
 * _strcat - concatnating two srtings
 * @dest: first input string
 * @src: second input stirng
 * Return: pointer to concatnated string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
