#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
*/
int main(void)
{
	int digit1, digit2, conc1, conc2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			conc1 = (digit1 % 10) + '0';
			conc2 = (digit2 % 10) + '0';

			if(strcat(conc1, conc2) == strcat(conc2, conc1))
				continue;

			putchar(conc1);
			putchar(conc2);
	
			if (digit1 == 9 && digit2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
