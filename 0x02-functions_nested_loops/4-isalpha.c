#include "main.h"

/**
 * _isalpha - Shows 1 if the input is a letter and shows 0 for other cases
 * @c: the character to be checked in ASCII code
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
