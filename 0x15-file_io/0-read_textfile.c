#include "main.h"


/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: returns actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_do, file_dr, file_dw;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	file_do = open(filename, O_RDONLY);
	if (file_do < 0)
	{
		free(temp);
		return (0);
	}

	file_dr = read(file_do, temp, letters);
	if (file_dr < 0)
	{
		free(temp);
		return (0);
	}

	file_dw = write(STDOUT_FILENO, temp, file_dr);
	free(temp);
	close(file_do);

	if (file_dw < 0)
		return (0);
	return ((ssize_t)file_dw);
}
