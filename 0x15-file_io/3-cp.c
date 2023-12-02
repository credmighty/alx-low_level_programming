#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int close_file(int fd);
void copy_file(const char *file_from, const char *file_to);

/**
 * copy_file - copy content from a file to another
 * @file_from: the file with the content to copy
 * @file_to: the destination
 * Return: file dest file with the content. Exit on any failure
 */
void copy_file(const char *file_from, const char *file_to)
{
	int from, to;
	char buffer[1024];
	ssize_t fr, fw;

	from = open(file_from, O_RDONLY);
	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	fr = read(from, buffer, sizeof(buffer));
	if (from == -1 || fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		close(to);
		exit(99);
	}
	fw = write(to, buffer, fr);
	if (fw == -1 || fw != fr)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_from);
		close_file(from);
		close_file(to);
		exit(99);
	}
	close_file(from);
	close_file(to);
}

/**
 * close_file - function to close file
 * @fd: the file to be closed
 * Return: the value of the fildes
 */
int close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: ) on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
