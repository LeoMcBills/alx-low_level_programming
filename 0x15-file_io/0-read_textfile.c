#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: the text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed, 
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t wrt;
	ssize_t s;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	s = read(fd, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, s);

	free(buffer);
	close(fd);
	return (wrt);
}
