#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	for ( i; i < size; i++)
		(*action) (array[i]);
}

