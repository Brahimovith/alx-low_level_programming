#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int a,b;
	char *c;
	a = b = 1;
	while(s1[a] != '\0')
		a++;
	while(s2[b] != '\0')
		b++;
	c = malloc((a + b) * sizeof(char));
	if(c == NULL)
		return (NULL);
	a = b = 0;
	while(s1[a] != '\0')
		c[a] = s1[a];
	while(s2[b] != '\0')
		c[a + b] = s2[b];
	return (c);
}

