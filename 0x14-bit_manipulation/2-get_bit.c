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
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
