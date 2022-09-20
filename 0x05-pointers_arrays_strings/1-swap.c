#include "main.h"

/**
 * swap_int - fns to interchange value of variables
 * @a: parameter 1 for the swap
 * @b: parameter 2 for the swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tempnum;

	tempnum = *a;
	*a = *b;
	*b = tempnum;
}
