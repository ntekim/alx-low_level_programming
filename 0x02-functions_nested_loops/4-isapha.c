#include "main.h"
#include <ctype.h>
/**
 *  _isalpha - check if c is alphabet
 *
 *  c - confirm if it's alphabet or not
 *
 *  Return: 1 (success) || 0 (failure)
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);

	return (0);
}
