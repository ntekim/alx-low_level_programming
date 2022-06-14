#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - converts a string to integer
 * @s: string to be converted
 *
 * Return: 0 (success)
 */

int _atoi(char *s)
{
	int c, i, len, sign = 1;

	i = 0;
	len = strlen(s);
	while (i <= len)
	{
		if (*s == '-')
			sign *= -1;

		if (*s == '+')
			s++;

		if (!(*s >= 'a' || *s <= 'z'))
			return (0);

		if (*s == ' ')
			s++;

		c = atoi(s);
		i++;
	}
	return (c * sign);
}
