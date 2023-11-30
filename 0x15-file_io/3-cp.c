#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - Program that copies content from a file to another file
 * @argc: parameter that counts the argument
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int from, to, fr, fw, ff, ft;
	char *buffer;

	buffer = malloc(sizeof(char *) * 1024);
	if (buffer == NULL)
		dprintf(STDOUT_FILENO, "Error: memory is zero\n");

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fr = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	fw = write(to, buffer, fr);
	while (fr > 0)
	{
		if (to == -1 || fw != fr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}

	ff = close(from);
	ft = close(to);
	if (ff == -1 || ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff == -1 ? from : to);
		exit(100);
	}
	free(buffer);
	return (0);
}
