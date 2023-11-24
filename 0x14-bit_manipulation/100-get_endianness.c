#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int x;
	char *pt;

	x = 1;
	pt = (char *)&x;

	return ((int)*pt);
}
