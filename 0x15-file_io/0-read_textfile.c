#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: the file containing texts being read
 * @letters: the number of letters to be read
 * Return: the accurate number of bytes to be read and printed and
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t wr;
	ssize_t t;
	char *buf;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(file, buf, letters);
	wr = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file);
	return (wr);
}
