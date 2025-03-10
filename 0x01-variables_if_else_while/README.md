0x01. C - Variables, if, else, while
====================================
Resources
Read or watch:

Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
[Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/variable_declaration.html)
[integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
[Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
[If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
[if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
[Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
[Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
[while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
[While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)
man or help:

ascii (You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.)
Additional resources
Introduction to C (Basic structure and variables)

Tasks
-----

### 0\. Positive anything is better than negative nothing

mandatory

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

-   You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c "here")
-   The variable `n` will store a different value every time you will run this program
-   You don't have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
-   The output of the program should be:
    -   The number, followed by
        -   if the number is greater than 0: `is positive`
        -   if the number is 0: `is zero`
        -   if the number is less than 0: `is negative`
    -   followed by a new line

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `0-positive_or_negative.c`

Done? Help Get a sandbox

### 1\. The last digit

mandatory

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

-   You can find the source code [here](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c "here")
-   The variable `n` will store a different value every time you run this program
-   You don't have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
-   The output of the program should be:
-   The string `Last digit of`, followed by
-   `n`, followed by
-   the string `is`, followed by
    -   if the last digit of `n` is greater than 5: the string `and is greater than 5`
    -   if the last digit of `n` is 0: the string `and is 0`
    -   if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
-   followed by a new line

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `1-last_digit.c`

 Done? Help Get a sandbox

### 2\. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

mandatory

Write a program that prints the alphabet in lowercase, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc...) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` twice in your code

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `2-print_alphabet.c`

 Done? Help Get a sandbox

### 3\. alphABET

mandatory

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc...) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` three times in your code

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `3-print_alphabets.c`

 Done? Help Get a sandbox

  ### 4\. When I was having that alphabet soup, I never thought that it would pay off

  mandatory

  Write a program that prints the alphabet in lowercase, followed by a new line.

  -   Print all the letters except `q` and `e`
  -   You can only use the `putchar` function (every other function (`printf`, `puts`, etc...) is forbidden)
  -   All your code should be in the `main` function
  -   You can only use `putchar` twice in your code

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `4-print_alphabt.c`

 Done? Help Get a sandbox

### 5\. Numbers

mandatory

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

-   All your code should be in the `main` function


**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `5-print_numbers.c`

 Done? Help Get a sandbox

### 6\. Numberz

mandatory

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

-   You are not allowed to use any variable of type `char`
-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc...) is forbidden)
-   You can only use `putchar` twice in your code
-   All your code should be in the `main` function


**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `6-print_numberz.c`

 Done? Help Get a sandbox

### 7\. Smile in the mirror

mandatory

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc...) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` twice in your code

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `7-print_tebahpla.c`

 Done? Help Get a sandbox

### 8\. Hexadecimal

mandatory

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc...) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` three times in your code

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `8-print_base16.c`


### 9\. Patience, persistence and perspiration make an unbeatable combination for success

mandatory

Write a program that prints all possible combinations of single-digit numbers.

-   Numbers must be separated by `,`, followed by a space
-   Numbers should be printed in ascending order
-   You can only use the `putchar` function (every other function (`printf`, `puts`, etc...) is forbidden)
-   All your code should be in the `main` function
-   You can only use `putchar` four times maximum in your code
-   You are not allowed to use any variable of type `char`


**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x01-variables_if_else_while`
-   File: `9-print_comb.c`
