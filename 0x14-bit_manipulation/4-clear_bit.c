#include "main.h"

/**
 * clear_bit - set value of index to 0
 * @n: the long variable
 * @index: the postion to change
 * Return: (1) if it work
 *		(-1) for errors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
