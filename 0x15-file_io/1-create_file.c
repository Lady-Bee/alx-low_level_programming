#include "main.h"


/**
 * create_file - function creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: returns 1 if successful and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_do, file_dw, len = 0;

	if (filename == NULL)
		return (-1);

	file_do = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_do < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	file_dw = write(file_do, text_content, len);
	close(file_do);
	if (file_dw < 0)
		return (-1);
	return (1);
}
