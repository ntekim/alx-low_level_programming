#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename to append text to
 * @text_content: Null termianted string to add at the end of the file
 *
 * Return: 1 (success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (access(filename, F_OK) == -1)
		{
			if (access(filename, W_OK) == -1)
				return (-2);

			return (1);
		}
		return (-3);
	}

	for (len = 0; text_content[len];)
		len++;

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-4);

	close(o);

	return (1);
}
