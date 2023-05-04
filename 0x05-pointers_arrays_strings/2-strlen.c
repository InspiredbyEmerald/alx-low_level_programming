#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}
