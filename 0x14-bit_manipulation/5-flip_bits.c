#include "main.h"

/**
 * flip_bits - count th number of bits needed to flip
 *		to get one form one numebr to the other
 * @n: the number
 * @m: the number to flip n to
 * Return: the neccesary bit to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
