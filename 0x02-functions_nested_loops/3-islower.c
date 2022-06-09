#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _islower - check for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 (success) || 0 (failure)
*/

int _islower(int c)
{
	if (islower(c))
		return (1);

	return (0);
}
