#include <stdio.h>
/**
 * main - printing all possible combinations of two digits
 *
 * ranging from 0-99, separated by comma followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g1, g2;

	for (g1 = 0; g1 <= 98; g1++)
	{
		for (g2 = g1 + 1; g2 <= 99; g2++)
		{
			putchar((g1 / 10) + '0');
			putchar((g1 % 10) + '0');
			putchar(' ');
			putchar((g2 / 10) + '0');
			putchar((g2 % 10) + '0');

			if (g1 == 98 && g2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
