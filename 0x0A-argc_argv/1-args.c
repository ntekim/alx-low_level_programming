#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: variable for number of arguments passed into the program
 * @argv: pointer array storing all arguments passed into the program
 *
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
