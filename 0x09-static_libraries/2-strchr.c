#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to serach
 * @c: char to locate
 * Return: pointer to posotion
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
