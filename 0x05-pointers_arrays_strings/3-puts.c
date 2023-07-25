#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	for(int i =0, i<strlen(str), i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
