#include "main.h"
#include <stdlib.h>

/**
 * create_array  - Entry point of function
 * Descr - 'a function that creates an array of chars'
 * @size: size of specified array
 * @c: char type
 * Return: pointer to char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int q;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);

	if (ar == 0)
	{
		return (NULL);
	}

	for (q = 0; q < size; q++)
	{
		ar[q] = c;
	}

	ar[q] = '\0';

	return (ar);

}
