#include "main.h"
/**
 *
 * jack bauer - prints every minute of the day of jack bauer from 00:00 - 23:59
 *
 * @n: character to check
 *
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 9; minute++)
		{
			_putchar((hour % 10) + '0')
			_putchar(":");
			_putchar((minute % 10) + '0')
		}
	}