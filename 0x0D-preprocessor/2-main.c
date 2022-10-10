#include <stdio.h>

/**
 * main - Entry point, prints the file name it was compiled from
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
