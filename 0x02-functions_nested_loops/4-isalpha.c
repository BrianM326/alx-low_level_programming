#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - checks for alphabetical character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'A' && c <= 'Z'));
}
