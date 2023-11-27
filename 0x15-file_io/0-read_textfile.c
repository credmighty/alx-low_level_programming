#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Function that reads file
 * @filename: the name of the file to read
 * @letters: the number to characters to read and print
 * Return: the letters on Success, 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *let;
	int fw, fr;

	let = malloc(sizeof(char) * letters);
	fp = open(filename, O_RDONLY);
	fr = read(fp, let, letters);
	fw = write(STDOUT_FILENO, let, fr);
	if (filename == NULL)
		return (0);

	if (let == NULL)
		return (0);

	if (fp == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(let);
		close(fp);
		return (0);
	}

	free(let);
	close(fp);

	return (fr);
}
