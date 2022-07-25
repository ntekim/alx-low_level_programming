#include "main.h"
#include <fcntl.h>
#include <stdio.h>
/**
 * read_textfile - function that reads a text and prints it to the 
 * POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to be printed
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	const buff[];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read(fd, buff, letters);

	close(fd);

	printf("%s\n", buff);
	return (letters);
}
