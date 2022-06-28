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

	p = malloc(sizeof(char *));
