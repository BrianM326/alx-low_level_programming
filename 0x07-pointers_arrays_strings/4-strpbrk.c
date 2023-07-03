#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *strpbrk(char *s, char *accept)
{
	int n;
	
	while  (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (strchr(accept, s[n]) != NULL)
			return (s);
		}
		s++;
	}
	return ('\0');
}
