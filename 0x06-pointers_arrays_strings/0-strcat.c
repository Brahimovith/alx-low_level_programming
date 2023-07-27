#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *p;
	int i=0;
	int m=0;
	while(dest!='\0')
	{
		i++;
		dest++;
	}
	while(src!='\0')
	{
		m++;
		src++;
	}
	for(int a=0;a<(i+m);a++)
	{
		if (a<i)
		{
			for (int k=0;k<i;k++)
			{
				p[k]=dest[k];
			}
		}
		else if (a=i)
		{
			p[a]=_putchar(" ");
		}
		else
		{
			p[a]=src[a-m];
		}
	}
	return p;
}
	
