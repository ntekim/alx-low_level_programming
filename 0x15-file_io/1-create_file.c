#include "main.h"
#include <stdlib.h>
/**
 * create_file - program creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 (success)
 */

int create_file(const char *filename, char *text_content)
{
	int o, w;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	if (access(filename, F_OK) == 0)
	{
		o = open(filename, O_TRUNC| O_RDWR);
		w = write(o, text_content, len);

		if (o == -1 || w == -1)
			return (-1);
	}

	o = open(filename, O_CREAT | O_RDWR, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
