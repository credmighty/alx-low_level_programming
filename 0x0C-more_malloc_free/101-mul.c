#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/** program that multiplies two positive numbers
 * usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * print result, followed by a new line
 * if the number of arguments is incorrect, print Error followed by new line and exit with a status of 98
 * num1 and num2 should only be composed of digits. if not, print Error followed by new line and exit with a status of 98
 *
 * APPROACH
 * MUL FUNCTION
 * write a multiplication function returns int
 * takes two positive number
 * multiply the two number
 * print result
 *
 * IS_DIGIT FUNCTION
 * write a function that check it the argument is digit and return int
 * takes char argment
 * traverse thru the argument (arg[i] != \0)
 * compare the each element is btw 0 and 9 - (arg[i] >= 0 || arg[i] <= 9)
 * return 0
 * else return 1
 *
 * CONVERT THE STRING TO NUM
 * traverse thru the arg (arg[i] != \0)
 * declare and initialize num to 0 (to determine the position of the number)
 * num *= 10 + (arg[i] - '0')
 * return num
 *
 * PRINT ERROR FUNCTION
 * function that prints error message
 * print error - printf("ERROR\N")
 * EXIT(98)
 *
 * MAIN FUNCTION
 * main - to check the function
 * take argument for command line (argc **argv)
 * check if the argument is digit If not, print Error, followed by a new line, and exit with a status of 98
 * pass the num into mul func
 */

/**
 * mul - multiplies two positive numbers
 * @a: 1st argument
 * @b: 2nd argument
 *
 * Return: the product of the two numbers
 */
int mul(int a, int b)
{
        return (a * b);
}

/**
 * _is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _is_digit(char *s)
{
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
               if (s[i] >= 0 || s[i] <= 9)
                       return (0);
               return (1);
        }
}
int str_t_num(char *s)
{
        int num = 0;
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
                num = num * 10 + (s[i] - '0');
        }
        return (num);
}

/**
 * print_error - handles errors for main
 * Return: nothing
 */
void print_error(void)
{
        printf("Error\n");
        exit(98);
}


/**
 * main - multiplies two positive numbers
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: always 0 (Success)
 */
int main (int ac, char **av)
{
        int num2, num1, result;

        if (ac != 3)
                print_error();
        if (_is_digit(av[1]) || _is_digit(av[2]))
                print_error();
        num1 = str_t_num(av[1]);
        num2 = str_t_num(av[2]);
        result = mul(num1, num2);
        printf("%d\n", result);
        return (0);
}
