0x1E. C - Search Algorithms
===========================

- By Dev Nderitu
- Weight: 1

Resources
Read or watch:

- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
- [Serach Algorithms video playlist](https://www.youtube.com/watch?v=wNOoyZ45SmQ&list=PLEJXowNB4kPwTb4BivkY0dENHmXdOEM3V)

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/i0Ru9NIvGBHVAlsg7w5vVg "explain to anyone"), **without the help of Google**:

### General

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

Requirements
------------

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
- You are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`, ... is forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `search_algos.h`
- Don't forget to push your header file
- All your header files should be include guarded

More Info
---------

You will be asked to write files containing big O notations. Please use this format:

- `O(1)`
- `O(n)`
- `O(n!)`
- n*m -> `O(nm)`
- n square -> `O(n^2)`
- sqrt n -> `O(sqrt(n))`
- log(n) -> `O(log(n))`
- n * log(n) -> `O(nlog(n))`
- ...

Tasks
-----

### 0\. Linear search

mandatory

Score: 0.00% (Checks completed: 0.00%)

Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://alx-intranet.hbtn.io/rltoken/17RKhbmvh_u4ebCwaSxCxg "Linear search algorithm")

- Prototype : `int linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

```
wilfried@0x1E-search_algorithms$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `0-linear.c`

 Done? Help Check your code Ask for a new correction QA Review

### 1\. Binary search

mandatory

Score: 0.00% (Checks completed: 0.00%)

Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://alx-intranet.hbtn.io/rltoken/SnveFJhSDE7o8bEx-kGGpA "Binary search algorithm")

- Prototype : `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won't appear more than once in `array`
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

```
wilfried@0x1E-search_algorithms$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `1-binary.c`

 Done? Help Check your code Ask for a new correction QA Review

### 2\. Big O #0

mandatory

Score: 0.00% (Checks completed: 0.00%)

What is the `time complexity` (worst case) of a linear search in an array of size `n`?

```
The time complexity of a linear search in an array of size n is O(n) in the worst case. This is because in the worst case scenario, the element being searched for is at the end of the array, or not present in the array at all, and the algorithm must compare the target element with every element in the array before terminating. As the size of the array grows, the number of comparisons required by the algorithm grows linearly, which results in a linear time complexity.

In other words, the worst-case scenario for a linear search occurs when the target element is not present in the array, and the algorithm has to iterate through all n elements of the array before concluding that the element is not present. In this scenario, the number of comparisons required is proportional to n, and the time complexity is O(n).
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `2-O`

 Done? Help Check your code Ask for a new correction QA Review

### 3\. Big O #1

mandatory

Score: 0.00% (Checks completed: 0.00%)

What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `3-O`

```
The space complexity (worst case) of an iterative linear search algorithm in an array of size n is O(1). This is because the algorithm does not require any additional space other than the space required to store the input array and a few constant variables used by the algorithm.

In the iterative linear search algorithm, we start searching for the target element from the beginning of the array and compare it with each element of the array one by one until we find a match or reach the end of the array. During the search, we do not use any extra space that depends on the size of the input array, and the space required by the algorithm remains constant.

Therefore, the space complexity of an iterative linear search algorithm is independent of the size of the input array and is O(1) in the worst case.
```

 Done? Help Check your code Ask for a new correction QA Review

### 4\. Big O #2

mandatory

Score: 0.00% (Checks completed: 0.00%)

What is the `time complexity` (worst case) of a binary search in an array of size `n`?

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `4-O`

```
The time complexity (worst case) of a binary search in an array of size n is O(log n). This is because in each step of the binary search algorithm, the size of the array to be searched is halved. This means that after the first comparison, we only need to search half of the array, after the second comparison, we only need to search a quarter of the array, and so on.

This results in a logarithmic time complexity. In the worst case scenario, the element being searched for is not present in the array, and the algorithm has to continue dividing the array until the size of the remaining subarray becomes 0. This requires a maximum of log n comparisons to be made, hence the time complexity of O(log n).

Binary search is an efficient search algorithm for sorted arrays, as it reduces the number of comparisons required to find the target element as compared to a linear search algorithm which has a time complexity of O(n) in the worst case.
```

 Done? Help Check your code Ask for a new correction QA Review

### 5\. Big O #3

mandatory

Score: 0.00% (Checks completed: 0.00%)

What is the `space complexity` (worst case) of a binary search in an array of size `n`?

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `5-O`

```
The space complexity (worst case) of a binary search in an array of size n is O(1). This is because the binary search algorithm does not require any additional space that depends on the size of the input array.

The binary search algorithm works by iteratively dividing the array into two halves, and updating the search range accordingly. The algorithm only requires a few constant variables to keep track of the search range and the position of the target element relative to the middle element of the array.

Since the space required by the algorithm remains constant regardless of the size of the input array, the space complexity of the binary search algorithm is O(1) in the worst case.

Therefore, binary search is both a time and space-efficient algorithm for searching elements in a sorted array.
```

 Done? Help Check your code Ask for a new correction QA Review

### 6\. Big O #4

mandatory

Score: 0.00% (Checks completed: 0.00%)

What is the space complexity of this function / algorithm?

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}

```

```
The space complexity of the allocate_map function is O(nm), where n is the number of rows and m is the number of columns in the 2D matrix or map being created.

The function allocates memory for a 2D matrix or map using dynamic memory allocation in C. It allocates space for an array of n integer pointers using malloc(sizeof(int *) * n), and then allocates space for each row of the matrix using malloc(sizeof(int) * m) inside a loop that runs n times.

Therefore, the space complexity of this algorithm is proportional to the product of the number of rows and columns in the matrix being created, and hence O(nm).
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `6-O`

# advanced

### 7\. Jump search

Score: 0.00% (Checks completed: 0.00%)

Write a function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://alx-intranet.hbtn.io/rltoken/1Op40kSYMN23JsOu6F3P1A "Jump search algorithm")

- Prototype : `int jump_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You have to use the square root of the size of the array as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don't forget to compile with -lm)
- Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)

```
wilfried@0x1E-search_algorithms$ cat 100-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump
wilfried@0x1E-search_algorithms$ ./100-jump
Value checked array[0] = [0]
Value checked array[3] = [3]
Value found between indexes [3] and [6]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Found 6 at index: 6

Value checked array[0] = [0]
Value found between indexes [0] and [3]
Value checked array[0] = [0]
Value checked array[1] = [1]
Found 1 at index: 1

Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value checked array[9] = [9]
Value found between indexes [9] and [12]
Value checked array[9] = [9]
Found 999 at index: -1

```

```
Explanation:
The function takes the sorted integer array, the size of the array, and the value to search as input parameters. It starts by checking if the array is NULL, and returns -1 if it is. Then, it sets the jump step as the square root of the size of the array, and initializes the left and right pointers.

The while loop is used to move the right pointer forward in jumps of size jump until it finds an element that is greater than or equal to the value we are searching for or until it reaches the end of the array. Inside the loop, it also prints the indices of the array that are being checked.

After the loop, it checks if the right pointer has gone beyond the bounds of the array and adjusts it if necessary. Then, it searches for the value in the range [left, right] using a for loop, and returns the index if it is found. If the value is not found, it prints a message saying so and returns -1.

Finally, in the main function, we create an integer array, get its size, and call the jump_search function with different values to test it.

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `100-jump.c`

 Done? Help Check your code Ask for a new correction QA Review

### 8\. Big O #5

# advanced

Score: 0.00% (Checks completed: 0.00%)

What is the `time complexity` (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`?

```
The time complexity (average case) of a jump search algorithm in an array of size n, using step = sqrt(n), is O(sqrt(n)).

The while loop in the algorithm takes O(sqrt(n)) time because it makes at most sqrt(n) iterations, and each iteration involves a constant amount of work. Then, the for loop that searches for the value in the range [left, right] takes at most O(sqrt(n)) time, because the size of the range is at most sqrt(n). Therefore, the overall time complexity is O(sqrt(n)).

Since the jump search algorithm requires the array to be sorted, we can assume that the array is sorted in ascending order, which allows the algorithm to make the jumps of size sqrt(n). This step size is chosen because it strikes a balance between the number of steps required to reach the target value and the number of comparisons required at each step.

Compared to a linear search, the jump search algorithm can significantly reduce the number of comparisons required to find a value in a sorted array, especially for large arrays. However, for smaller arrays, the overhead of the algorithm may outweigh its benefits, and a linear search may be faster.
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `101-O`

Done? Help Check your code Ask for a new correction QA Review

### 9\. Interpolation search

### advanced

Score: 0.00% (Checks completed: 0.00%)

Write a function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://alx-intranet.hbtn.io/rltoken/cswpABHiyyRmGrPkzsMTyw "Interpolation search algorithm")

- Prototype : `int interpolation_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- To determine the probe position, you can use : `size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))`
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

```
wilfried@0x1E-search_algorithms$ cat 102-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 102-main.c 102-interpolation.c -o 102-interpolation
wilfried@0x1E-search_algorithms$ ./102-interpolation
Value checked array[6] = [2]
Value checked array[7] = [3]
Found 3 at index: 7

Value checked array[14] = [7]
Found 7 at index: 14

Value checked array[2109] is out of range
Found 999 at index: -1

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `102-interpolation.c`

 Done? Help Check your code Ask for a new correction QA Review

### 10\. Exponential search

# advanced

Score: 0.00% (Checks completed: 0.00%)

Write a function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://alx-intranet.hbtn.io/rltoken/J7wng_ddosamvEkFl0ekqA "Exponential search algorithm")

- Prototype : `int exponential_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You have to use powers of 2 as exponential ranges to search in your array
- Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
- Once you've found the good range, you need to use a binary search:
  - Every time you split the array, you have to print the new array (or subarray) you're searching in (See example)

```
wilfried@0x1E-search_algorithms$ cat 103-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62));
    printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3));
    printf("Found %d at index: %d\n", 999, exponential_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential
wilfried@0x1E-search_algorithms$ ./103-exponential
Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Found 62 at index: 13

Value checked array[1] = [1]
Value checked array[2] = [2]
Value found between indexes [2] and [4]
Searching in array: 2, 3, 4
Found 3 at index: 3

Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Searching in array: 76, 99
Searching in array: 99
Found 999 at index: -1

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `103-exponential.c`

 Done? Help Check your code Ask for a new correction QA Review

### 11\. Advanced binary search

# advanced

Score: 0.00% (Checks completed: 0.00%)

You may have noticed that the basic binary search does not necessarily return the index of the *first* value in the array (if this value appears more than once in the array). In this exercise, you'll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.

- Prototype : `int advanced_binary(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you split the array, you have to print the new array (or subarray) you're searching in (See example)
- You have to use recursion. You may only use one loop (`while`, `for`, `do while`, etc.) in order to print the array

```
wilfried@0x1E-search_algorithms$ cat 104-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary
wilfried@0x1E-search_algorithms$ ./104-advanced_binary
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `104-advanced_binary.c`

 Done? Help Check your code Ask for a new correction QA Review

### 12\. Jump search in a singly linked list

# advanced

Score: 0.00% (Checks completed: 0.00%)

You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.

Please define the following data structure in your `search_algos.h` header file:

```
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

```

Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.

- Prototype : `listint_t *jump_list(listint_t *list, size_t size, int value);`
- Where `list` is a pointer to the head of the list to search in
- `size` is the number of nodes in `list`
- And `value` is the value to search for
- Your function must return a pointer to the first node where `value` is located
- You can assume that `list` will be sorted in ascending order
- If `value` is not present in `head` or if `head` is `NULL`, your function must return `NULL`
- You have to use the square root of the size of the list as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don't forget to compile with -lm)
- Every time you compare a value in the list to the value you are searching, you have to print this value (see example)

NOTE: [You can find here](https://alx-intranet.hbtn.io/rltoken/DXrlCzhZtQAc3pUOJth8OQ "You can find here") the functions used in the example. You don't need to push them, we will compile your file with our own implementation during the correction.

```
wilfried@0x1E-search_algorithms$ cat 105-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res =  jump_list(list, size, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);
    res =  jump_list(list, size, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);
    res =  jump_list(list, size, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_list(list);
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
wilfried@0x1E-search_algorithms$ ./105-jump
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11

Value checked at index [4] = [4]
Value found between indexes [0] and [4]
Value checked at index [0] = [0]
Value checked at index [1] = [1]
Value checked at index [2] = [2]
Found 2 at index: 2

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value checked at index [15] = [99]
Value found between indexes [12] and [15]
Value checked at index [12] = [61]
Value checked at index [13] = [62]
Value checked at index [14] = [76]
Value checked at index [15] = [99]
Found 999 at index: (nil)

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `105-jump_list.c`

 Done? Help Check your code Ask for a new correction QA Review

### 13\. Linear search in a skip list

# advanced

Score: 0.00% (Checks completed: 0.00%)

As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an "express lane" to browse it. A linked list with an express lane is called a [skip list](https://alx-intranet.hbtn.io/rltoken/SD8K3P6iYfmYTq39XZzo_Q "skip list"). This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as `sizeof(skiplist_t) > sizeof(listint_t)` (see example below).

Please define the following data structure in your `search_algos.h` header file:

```
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

```

Write a function that searches for a value in a sorted skip list of integers.

- Prototype : `skiplist_t *linear_skip(skiplist_t *list, int value);`
- Where `list` is a pointer to the head of the skip list to search in
- A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
- And `value` is the value to search for
- You can assume that `list` will be sorted in ascending order
- Your function must return a pointer on the first node where `value` is located
- If `value` is not present in `list` or if `head` is `NULL`, your function must return `NULL`
- Every time you compare a value in the list to the value you are searching, you have to print this value (see example below)

NOTE: [You can find here](https://alx-intranet.hbtn.io/rltoken/ZTcTNOravCLvET4WjJJqrg "You can find here") the functions used in the example. You don't need to push them, we will compile your file with our own implementation during the correction.

```
wilfried@0x1E-search_algorithms$ cat 106-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    skiplist_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_skiplist(array, size);
    print_skiplist(list);

    res =  linear_skip(list, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);
    res =  linear_skip(list, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);
    res =  linear_skip(list, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_skiplist(list);
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear
wilfried@0x1E-search_algorithms$ ./106-linear
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Express lane :
Index[0] = [0]
Index[4] = [4]
Index[8] = [18]
Index[12] = [61]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11

Value checked at index [4] = [4]
Value found between indexes [0] and [4]
Value checked at index [0] = [0]
Value checked at index [1] = [1]
Value checked at index [2] = [2]
Found 2 at index: 2

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [12] and [15]
Value checked at index [12] = [61]
Value checked at index [13] = [62]
Value checked at index [14] = [76]
Value checked at index [15] = [99]
Found 999 at index: (nil)

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `106-linear_skip.c`

 Done? Help Check your code Ask for a new correction QA Review

### 14\. Big O #6

# advanced

Score: 0.00% (Checks completed: 0.00%)

What is the `time complexity` (average case) of a jump search in a singly linked list of size `n`, using `step = sqrt(n)`?

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `107-O`

 Done? Help Check your code Ask for a new correction QA Review

### 15\. Big O #7

# advanced

Score: 0.00% (Checks completed: 0.00%)

What is the `time complexity` (average case) of a jump search in a skip list of size `n`, with an express lane using `step = sqrt(n)`?

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1E-search_algorithms`
- File: `108-O`