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
	FILE *fp;
	char *str;
	ssize_t byt_rd;
	ssize_t byt_wr;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	str = malloc(sizeof(char) * (letters + 1));
	if (str == NULL)
	{
		fclose(fp);
		return (0);
	}
	byt_rd = fread(str, sizeof(char), letters, fp);
	if (byt_rd <= 0)
	{
		fclose(fp);
		free(str);
		return (0);
	}
	byt_wr = write(STDOUT_FILENO, str, byt_rd);
	if (byt_wr != byt_rd)
	{
		fclose(fp);
		free(str);
		return (0);
	}
	fclose(fp);
	free(str);
	return (byt_wr);
}
