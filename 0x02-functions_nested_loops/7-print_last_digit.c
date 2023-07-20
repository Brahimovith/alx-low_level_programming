#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int m;
	m=i%10;
	if(m<0)
	{
		_putchar('-');
		_putchar(m+48);
		return (-m);
	}
	else
	{
		_putchar(m+48);
		return (m);
	}


