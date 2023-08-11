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
	if (malloc(b) == NULL)
		return(98);
	else
		return (malloc(b));
}

