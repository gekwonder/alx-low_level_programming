#include "main.h"

/**
 * get_bit - get the value of bit in a given index
 * @n: the bit
 * @index: the index if the bit
 * Return: (-1) for an error
 *	otherwise - for bit index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (1);

	return (1);
}
