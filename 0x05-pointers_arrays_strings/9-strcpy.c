#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed by src
 * @dest: Pointer to the destination value
 * @src: Pointer to the source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
