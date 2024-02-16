#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
#define STDERR_FILENO STDOUT_FILENO
/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, exit codes as specified on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_status, write_status, close_status;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	do
	{
		read_status = read(fd_from, buffer, BUFFER_SIZE);
		if (read_status == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		write_status = write(fd_to, buffer, read_status);
		if (write_status == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	} while (read_status > 0);

	close_status = close(fd_from);
	if (close_status == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		close(100);
	}
	return (0);
}
