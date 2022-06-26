#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program multiplies two numbers
 * @argc: number of arguments variable
 * @argv: array of arguments passed into the program
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int prod, i, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
	}
	return (0);
}
