#include <stdio.h>
/**
 *main - E
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num <= 9; num++)
		putchar(num % 10 + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
