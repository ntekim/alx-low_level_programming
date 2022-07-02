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
    int *concat;

    concat = _calloc(98, sizeof(char));
    /*printf("%d\n", concat);*/
    free(concat);
    return (0);
}
