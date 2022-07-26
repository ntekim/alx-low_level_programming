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
