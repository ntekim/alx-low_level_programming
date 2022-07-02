#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *concat, i;

    concat = array_range(0, 98);
    /*for (i = 0; i <= 10; i++)*/ 
    	/*printf("%d\n", concat[i]);*/
    free(concat);
    return (0);
}
