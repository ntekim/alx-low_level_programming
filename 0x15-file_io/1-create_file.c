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
	unsigned int len = sizeof(text_content);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = " ";

	if (access(filename, F_OK) == 0)
	{
		o = open(filename, O_TRUNC);
		w = write(o, text_content, len);

		if (o == -1 || w == -1)
			return (-1);
	}

	o = open(filename, O_RDWR | O_CREAT);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	return (1);
}
