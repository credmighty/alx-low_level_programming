#include "main.h"

/**
 * print_binary - to print the binary od dec number
 * @n: the number converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
