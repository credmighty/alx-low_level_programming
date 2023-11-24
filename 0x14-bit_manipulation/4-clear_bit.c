#include "main.h"
/**
 * clear_bit - Sets the value of bit to 0
 * @n: the number
 * @index: location
 * Return: 1, worked. -1 error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = ~(1 << index);

	if (index > 63)
		return (-1);
	*n &= i;

	return (1);
}
