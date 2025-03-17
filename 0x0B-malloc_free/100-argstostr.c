#include <stdlib.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: allocated memory space
 * @av: 2D array
 * Return: array
 */

char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, pos, total_len = 0;

    // Check for invalid input
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    // Calculate total length (including \n for each arg and final \0)
    for (i = 0; i < ac; i++) {
        total_len += strlen(av[i]) + 1;  // Length of arg + \n
    }
    total_len += 1;  // For the final null terminator

    // Allocate memory for the new string
    str = (char *)malloc(total_len * sizeof(char));
    if (str == NULL) {
        return NULL;
    }

    // Build the concatenated string
    pos = 0;
    for (i = 0; i < ac; i++) {
        // Copy the argument
        for (j = 0; av[i][j] != '\0'; j++) {
            str[pos] = av[i][j];
            pos++;
        }
        // Add newline
        str[pos] = '\n';
        pos++;
    }
    str[pos] = '\0';  // Null-terminate the string

    return str;
}
