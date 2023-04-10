#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename - name of file
 * @text_content - the NULL terminated string to add at the end of the file
 * Return - 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opening, writing, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	opening = open(filename, O_WRONLY | O_APPEND);
	writing = write(opening, text_content, length);

	if (opening == -1 || writing == -1)
		return (-1);
	close(opening);

	return (1);
}
