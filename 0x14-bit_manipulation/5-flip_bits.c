#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: first arg
 * @m: second arg
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s = n ^ m;
	unsigned long int count;

	for (count = 0; s > 0; s >>= 1)
	{
		if (s & 1)
			count++;
	}
	return (count);
}
