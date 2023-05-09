#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- print STDOUT after reading text file
 * @filename: read text file
 * @letters: #letters read
 * Return: write actual number of bytes read and printed,
 * NULL for filename or 0 function fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
