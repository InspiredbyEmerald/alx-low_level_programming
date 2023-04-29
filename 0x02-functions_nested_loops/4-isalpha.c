#include "main.h"
/**
 * _isalpha-check if character is lowercase or uppercase
 * @f:character to check if it islowercase.
 * Return:1-if lowercase/uppercase,0-if not.
 */

int _isalpha(int f)
{
	if ((f >= 'a' && f <= 'z') || (f >= 'A' && f <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

