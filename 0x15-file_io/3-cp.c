#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * open_file - Open a file and handle errors.
 * @filename: The name of the file to open.
 * @flags: Flags for the open syscall.
 * @mode: Permissions for the file.
 *
 * Return: File descriptor on success, -1 on failure.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * close_file - Close a file descriptor and handle errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	int close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copy the content of one file to another.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t read_status, write_status;
	char buffer[BUFFER_SIZE];

	do {
		read_status = read(fd_from, buffer, BUFFER_SIZE);
		if (read_status == -1)
		{
			dprintf(2, "Error: Can't read from file\n");
			close_file(fd_from);
			close_file(fd_to);
			exit(98);
		}

		write_status = write(fd_to, buffer, read_status);
		if (write_status == -1 || write_status != read_status)
		{
			dprintf(2, "Error: Can't write to file\n");
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}

	} while (read_status > 0);
}

/**
 * main - Copy the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, exit codes as specified on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file
		(argv[2],
		 O_WRONLY | O_CREAT | O_TRUNC,
		 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH
		 );

	copy_file(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

