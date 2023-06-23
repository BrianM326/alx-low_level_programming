#include <stdio.h>
#include "main.h"

/*
 * print_numbers - Print th numbers since 0 up to 9
 * Return: the numbers since 0 up to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
}
