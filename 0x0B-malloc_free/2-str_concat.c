#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0, i, concat_index = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[concat_index++] = s2[i];

	str[concat_index + 1] = '\0';

	return (str);
}
