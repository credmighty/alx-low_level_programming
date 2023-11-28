#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Function to create files with permisions
 * @filename: the name to create
 * @text_content: the text to add to the created file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, fw, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(fp, text_content, len);

	if (fp == -1 || fw == -1)
		return (-1);
	close(fp);
	return (1);
}
