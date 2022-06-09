#include "main.h"
#include <stdlib.h>
/**
 * main - checks for uppercase character
 *
 * Return: 0 (success)
 */

int _isupper(int u)
{
	if(u >= 'A' && u <= 'Z')
		return (1);

	else
		return (0);
}
