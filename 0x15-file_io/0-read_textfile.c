#include "main.h"

/**
 * read_textfile - Read and print the content of a text file.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if an error occurs, including NULL filename,
 *         file open failure, memory allocation failure,
 *         read/write failure, or unexpected read/write length.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_written, bytes_read;
	char *buffer;
	int file_descript;

	if (filename == NULL)
		return (-1);
	file_descript = open(filename, O_RDONLY);
	if (file_descript == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descript);
		return (0);
	}

	bytes_read = read(file_descript, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descript);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descript);
		return (0);
	}
	free(buffer);
	close(file_descript);
	return (bytes_written);
}
