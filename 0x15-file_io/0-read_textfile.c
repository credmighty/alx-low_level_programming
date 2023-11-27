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

	if (filename == NULL)
		return (0);
	let = malloc(sizeof(char) * letters);

	if (let == NULL)
		return (0);

	fp = open("filename", O_RDONLY);
	if (fp == -1)
	{
		free(let);
		return (0);
	}

	fr = read(fp, let, letters);
	if (fr == -1)
	{
		free(let);
		close(fp);
		return (0);
	}

	fw = write(STDOUT_FILENO, let, fr);
	free(let);
	close(fp);
	if (fw == -1 || fw != fr)
	{
		return (0);
	}

	 return (fr);
}
