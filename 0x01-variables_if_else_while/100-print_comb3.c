#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
        int i, n = 1;
        int j;

        for (i = 0; i <= 9; i++)
        {
                for (j = n++; j <= 9; j++)
                {
                        putchar(i + '0');
                        putchar(j + '0');
                        if (i < 8)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        putchar('\n');
        return (0);
}
