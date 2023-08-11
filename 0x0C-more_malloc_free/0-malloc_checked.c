#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - prints buffer in hexa
 * @b:size
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}

