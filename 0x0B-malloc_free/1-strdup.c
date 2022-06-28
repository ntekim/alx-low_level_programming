#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string,
 *  which is a copy of the string given as a parameter
 *  @str: parameter of the function
 *
 *  Return: char
 */

char *_strdup(char *str)
{
	char *p;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	p = malloc(sizeof(char *) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		p[i] = str[i];

	p[len] = '\0';

	return (p);
}

