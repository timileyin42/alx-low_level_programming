#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 *
 * @filename: The name of the file to which text should be appended.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result, real_result;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (real_result = 0; text_content[real_result] != '\0'; real_result++)
		;
	write_result = write(fd, text_content, real_result);
	if (write_result == -1)
		return (-1);

	close(fd);
	return (1);
}
