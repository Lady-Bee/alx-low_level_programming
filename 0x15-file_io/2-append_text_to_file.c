#include "main.h"


/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: returns 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_do, file_dw, len = 0;

	if (filename == NULL)
		return (-1);

	file_do = open(filename, O_RDWR | O_APPEND);
	if (file_do < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file_do);
		return (1);
	}

	while (*(text_content + len))
		len++;

	file_dw = write(file_do, text_content, len);
	close(file_do);
	if (file_dw < 0)
		return (-1);

	return (1);
}
