#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to the aloocate memory (SUCCESS)
 * 98 IF insufficient memory is allocated (failure)
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		return (98);

	return (c);
}
