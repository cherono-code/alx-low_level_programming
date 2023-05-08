#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads the file to be printed
 * @filename: the text file being read
 * @letters: the number of letters read
 * Return: w- accurate number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t wr;
	ssize_t txt;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	txt = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, txt);

	free(buff);
	close(fd);
	return (wr);
}

