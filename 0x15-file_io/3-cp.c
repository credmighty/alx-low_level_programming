#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

char *_buffer(char *fileN);
void cl_file(int fp);

/**
 * _buffer - function to allocate memory
 * @fileN: argument passed into the function
 * Return: the memory
 */
char *_buffer(char *fileN)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileN);
		exit(99);
	}
	return (buf);
}

/**
 * cl_file - function that closes file descriptions
 * @fp: parameter of the func close
 * Return: void
 */
void cl_file(int fp)
{
	int cl;

	cl = close(fp);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}

/**
 * main - main function of cp
 * @argc: parameter that counts the argument
 * @argv: variable argument
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int from, to, fw, fr;
	char *buf_M;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf_M = _buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	fr = read(from, buf_M, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (from == -1 || fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fw = write(to, buf_M, fr);
	while (fr > 0)
	{
		if (to == -1 || fw != fr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
			/*free(buf_M);*/
		}

	}
	cl_file(from);
	cl_file(to);
	/*free(buf_M);*/

	return (0);
}
