#include "main.h"

/**
 * read_textfile - reads text file and
 * prints it to POSIX standard output
 * @filename: name of  file
 * @letters: number of letter to read and print
 * Return: numberof letter actually read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

		buf = malloc(sizeof(char) * (letters));

		if (!buf)
			return (0);

		nrd = read(fd, buf, letters);
		nwr = write(STDOUT_FILENO, buf, nrd);

		close(fd);

		free(buf);

		return (nwr);
	}
	return (0);
}
