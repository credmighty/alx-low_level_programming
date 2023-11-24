#include "main.h"
/**
 * set_bit - set a bit in given position
 * @n: the number
 * @index: the position
 * Return: the set position number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
