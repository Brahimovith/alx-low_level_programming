#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = *b;
}
