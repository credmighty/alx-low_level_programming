#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Function to create files with permisions
 * @filename: the name to create
 * @text_content: the text to add to the created file
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, fw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	fw = write(fp, text_content, len);

	if (fp == -1 || fw == -1)
		return (-1);
	close(fp);
	return (1);
}
