#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
        int i = 0;
        int a;
        while(*s != '\0')
        {       
                i++;
                s++;
        }
        s--;
        for(a= i; a>0 ; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
