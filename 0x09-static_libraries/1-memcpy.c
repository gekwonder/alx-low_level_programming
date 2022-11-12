#include "main.h"

/**
 * _memcpy - copying memory
 * @dest: memory for destination copy to
 * @src: memory to copy from
 * @n: number of bytes
 * Return: pointer to copy location in memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (start);
}
