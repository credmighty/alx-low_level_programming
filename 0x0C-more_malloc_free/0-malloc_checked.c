#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to the aloocate memory (SUCCESS)
 * 98 IF insufficient memory is allocated (failure)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
