#include "main.h"
/**
 *_strlen- Indicates the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int x = 0;
	/incremeant up to when the last character is NULL,\0/
	while (*(s + x) != 0)
	{
		x++;
	}
	return (x);
}

