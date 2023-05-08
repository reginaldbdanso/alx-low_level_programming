#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w+");
	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, fp);

	fclose(fp);
	return (1);
}
