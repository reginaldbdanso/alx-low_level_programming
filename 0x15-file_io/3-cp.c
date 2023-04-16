#include "main.h"

/**
 * closing_time - closes the file descriptors
 * @fd_from: input file descriptor
 * @fd_to: output file descriptor
 * Return:
 */

void closing_time(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
/**
 * main - entry point
 * Description: a program that copies the content of a
 * file to another file
 * @argc: number of arguments
 * @argv: arrayof strings
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buf[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buf, 1024)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if ((bytes_written == -1) || (bytes_written != bytes_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closing_time(fd_from, fd_to);
	return (0);
}
