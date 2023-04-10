#include "main.h"

/**
 *create_file - creates a new file
 *@filename: the name of the file to be  created
 *@text_content: text written to the file
 *Return: 1 if sucess, -1 if unsuccessful
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int x;
	int y;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (x = 0; text_content[x]; x++)
		;
	m = write(file, text_content, x);

	if (y == -1)
		return (-1);

	close(file);

	return (1);
}
