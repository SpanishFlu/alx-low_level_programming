#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * create_file - Creates a file and writes text to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t write_status;

	if (filename == NULL || fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(fd, text_content, strlen(text_content));

		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
