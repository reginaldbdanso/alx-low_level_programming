#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    char *buf = malloc(sizeof(char) * (letters + 1));
    if (buf == NULL) {
        fclose(fp);
        return 0;
    }

    ssize_t bytes_read = fread(buf, sizeof(char), letters, fp);
    if (bytes_read <= 0) {
        fclose(fp);
        free(buf);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);
    if (bytes_written != bytes_read) {
        fclose(fp);
        free(buf);
        return 0;
    }

    fclose(fp);
    free(buf);
    return bytes_written;
}
