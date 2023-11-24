#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to convert
 * @index: the bit to return
 * Return: the value off the bit index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
