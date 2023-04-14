#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

#define BUF_SIZE 1024

int main(int argc, char *argv[]) 
{
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    int fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    char buf[BUF_SIZE];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0) {
        bytes_written = write(fd_to, buf, bytes_read);
        if (bytes_written == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
        if (bytes_written != bytes_read) {
            dprintf(STDERR_FILENO, "Error: Incomplete write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}