#include "main.h"

/**
 * append_text_to_file - appends text at he end of a file
 * @filename: name of file
 * @text_content: content to be appended
 * Return: 1 success, -1  failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, fwrite, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_RDWR, 0664);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;

		fwrite = write(file, text_content, len);
		if (fwrite == -1)
			return (-1);
	}
	close(file);
	return (1);
}
