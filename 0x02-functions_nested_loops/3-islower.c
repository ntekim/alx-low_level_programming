#include "main.h"
#include <stdio.h>
/**
 * _islower - check for lowercase character
 *
 * Return: 1 (success) || 0 (failure)
*/

int _islower(int c)
{
	if (islower(c))
		return (1);

	return (0);
}
