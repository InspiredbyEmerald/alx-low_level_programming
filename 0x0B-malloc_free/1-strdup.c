#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point of function
 * Desc - 'a function that returns a pointer to a newly allocated mem'
 * @str : char string data type
 * Return: pointer to char
*/

char *_strdup(char *str)
{
	char *new_s;
	int l;
	int q;

	if (str == 0)
	{
		return (NULL);
	}

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	new_s = malloc(sizeof(char) * (l + 1));

	if (new_s == 0)
	{
		return (NULL);
	}

	for (q = 0; q < l; q++)
	{
		new_s[q] = str[q];
	}

	new_s[q] = '\0';

	return (new_s);
}

