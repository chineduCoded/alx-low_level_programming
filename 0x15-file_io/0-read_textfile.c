#include "main.h"

/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 * Return: Returns the number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, sz = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	sz = read(fd, buffer, letters);
	sz = write(STDOUT_FILENO, buffer, sz);
	if (sz < 0)
		return (0);

	close(fd);
	free(buffer);
	return (sz);
}
