#include <stdio.h>
/**
 * main - Program prints all argument it recieves
 * @argc: number of arguments recieved
 * @argv: pointer array of arguments recieved
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("No arguments passed\n");
	}
	return (0);
}
