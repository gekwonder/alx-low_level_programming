#include "main.h"

/**
 * set_bit - sets the value of a bit to a given index
 * @n: apointer to the bit
 * @index: the index is set to the value
 * Return: if an error, it will be (-1)
 *		otherwise (1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}