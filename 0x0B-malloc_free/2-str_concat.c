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
	int len1 = 0, len2 = 0, i, total, j;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	total = len1 + len2 + 1;

	str = malloc(sizeof(char) * total);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		while (s1)
		{
			str[i] = s1[i];
		}
		while (j = 0; j < len2)
		{
			str[i] = s2[j];
			j++;
		}
	}

	str[total] = '\0';

	return (str);
}
