#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char f)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == f)
			return (&s[a]);
	}
	return (0);
}

