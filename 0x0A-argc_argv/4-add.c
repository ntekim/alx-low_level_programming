#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Program adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum, num, digit;

	if (argc > 1)
	{
		for (num = 1; num < argc; num++)
		{

			for (i = 0; argv[num][i]; i++)
			{
				if (argv[num][i] < '0' || argv[num][i] > '9')
				{
						printf("0\n");
				}
				else
				{
					if (argv[num][i] > 'a' || argv[num][i] < 'z')
						printf("Error\n");
				/*else if (argv[i] > 'a' || argv[i] < 'z')
				{
					printf("%s:%s\n", argv[num], argv[i]);
					return (0);
				}*/
					sum += atoi(argv[num]);
					printf("%d\n", sum);
				}
			}
		}
	}
	return (0);
}
