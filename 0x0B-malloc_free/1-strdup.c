#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *c;
	int a;
	while(*str != '\0')
	{
		str++;
		i++;
	}
	c = malloc((i +1) * sizeof(char));
	if(str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < (i + 1); a++)
		{
			c[a] = str[a];
		}
		return (c);
	}
}
