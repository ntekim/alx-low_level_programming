#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * This program will assign a random number to the variable n 
 * each time it is executed. 
 * Complete the source code in order to print 
 * whether the number stored in the variable n is positive or negative
*/
/**
 * main - (function of the program)
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
	printf("is positive\n");
	else if(n < 0) 
 	printf("is negative\n");
	else 
	printf("is zero\n");
	return (0);
}
