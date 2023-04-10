#include "main.h"

/**
 * read_file - reads a file and prints the letters
 * @filename - name of file
 * @letters - number of letters
 * Return - the number of letters printed , if can't be opened, 0.
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int file;
	ssize_t x, letter;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, 0_RDONLY);

	if (file == -1)
		return (0);

	buffer =  malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	x = read(file, buffer, letters);
	letter = write(STDOUT_FILENO, buf, x);

	close(file);

	free(buffer);
	return (letter);
}
