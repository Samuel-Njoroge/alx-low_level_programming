#include "main.h"

/**
 * read_file - read file, output letters
 * @filename - filename
 * @letters - number of letters
 * Return - outputed , if can't be opened, 0.
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int file;
	ssize_t a, letter;
	char *buff;

	if (!filename)
		return (0);

	file = open(filename, 0_RDONLY);

	if (file == -1)
		return (0);

	buff =  malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	a = read(file, buff, letters);
	letter = write(STDOUT_FILENO, buff, a);

	close(file);

	free(buff);
	return (letter);
}
