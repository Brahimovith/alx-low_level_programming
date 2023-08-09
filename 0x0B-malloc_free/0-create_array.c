#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creation array
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int i;
	v = malloc(size * sizeof(char));
	if ( v == NULL || size == 0 )
	{
		return (NULL);
	}
	else
	{
		for ( i = 0; i < size ; i++ )
		{
			v[i] = c ;
		}
		return v;
	}
}

